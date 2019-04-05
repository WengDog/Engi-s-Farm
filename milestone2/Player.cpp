#include "Player.h"

using namespace std;


//variabel
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

//default constructor
Player::Player(){
    this->name = "player";
    this->waterContainer = 10;
    this->money = 0;
}

//user defined constructor
Player::Player(string name, int waterContainer, double money){
    this->name = name;
    this->waterContainer = waterContainer;
    this->money = money;
}

void Player::setname(string newname){
    this->name = newname;
}

void Player::setmoney(double newmoney){
    this->money = newmoney;
}

void Player::setwaterContainer(int newwaterContainer){
    this->waterContainer = newwaterContainer;
}

string Player::getname(){
    return this->name;
}

double Player::getmoney(){
    return this->money;
}

int Player::getwaterContainer(){
    return this->waterContainer;
}

// Player bergerak ke atas
void Player::moveUp(MatrixOfLand L, MatrixOfFacility F){
    // Inisialisasi koordinat yang dituju
    int next_x= getposx() - 1;
    int next_y = getposy();

    // Pengecekan apakah cell sudah terisi atau belum
    // jika belum maka player akan pindah ke koordinat baru
    if (next_x >= 0 && next_x < L.GetBarMax()){
        if (next_y >= 0 && next_y < L.GetKolMax()){
            if (!L.GetLand(next_x, next_y).GetOccupiedStatus() &&
                F.GetFacility(next_x, next_y).GetTypeOfFacility() == '.'){
                setposx(next_x);
                setposy(next_y);
            }
        }
    }
}

// Player bergerak ke bawah
void Player::moveDown(MatrixOfLand L, MatrixOfFacility F){
    // Inisialisasi koordinat yang dituju
    int next_x= getposx() + 1;
    int next_y = getposy();

    // Pengecekan apakah cell sudah terisi atau belum
    // jika belum maka player akan pindah ke koordinat baru
    if (next_x >= 0 && next_x < L.GetBarMax()){
        if (next_y >= 0 && next_y < L.GetKolMax()){
            if (!L.GetLand(next_x, next_y).GetOccupiedStatus() &&
                F.GetFacility(next_x, next_y).GetTypeOfFacility() == '.'){
                setposx(next_x);
                setposy(next_y);
            }
        }
    }
}

// Player bergerak ke kiri
void Player::moveLeft(MatrixOfLand L, MatrixOfFacility F){
    // Inisialisasi koordinat yang dituju
    int next_x= getposx();
    int next_y = getposy() - 1;

    // Pengecekan apakah cell sudah terisi atau belum
    // jika belum maka player akan pindah ke koordinat baru
    if (next_x >= 0 && next_x < L.GetBarMax()){
        if (next_y >= 0 && next_y < L.GetKolMax()){
            if (!L.GetLand(next_x, next_y).GetOccupiedStatus() &&
                F.GetFacility(next_x, next_y).GetTypeOfFacility() == '.'){
                setposx(next_x);
                setposy(next_y);
            }
        }
    }
}

// Player bergerak ke kanan
void Player::moveRight(MatrixOfLand L, MatrixOfFacility F){
    // Inisialisasi koordinat yang dituju
    int next_x = getposx();
    int next_y = getposy() + 1;

    // Pengecekan apakah cell sudah terisi atau belum
    // jika belum maka player akan pindah ke koordinat baru
    if (next_x >= 0 && next_x < L.GetBarMax()){
        if (next_y >= 0 && next_y < L.GetKolMax()){
            if (!L.GetLand(next_x, next_y).GetOccupiedStatus() &&
                F.GetFacility(next_x, next_y).GetTypeOfFacility() == '.'){
                setposx(next_x);
                setposy(next_y);
            }
        }
    }
}

// Fungsi render untuk player
char Player::render(){
    return 'P';
}

// Fungsi talk
void Player::Talk(MatrixOfAnimal A){
    cout << "---TALK COMMAND---\n";
    bool found = false;
    // Pengecekan animal disekitar player(atas, bawah, kiri, kanan)
    for (int i = 0; i < 4 && !found; i++){
        int nx = getposx() + dx[i];
        int ny = getposy() + dy[i];
        if (nx >= 0 && nx < A.GetBarMax() &&
            ny >= 0 && ny < A.GetKolMax()){
                // jika ditemukan hewan akan mengeluarkan suara
                if (A.GetAnimalMatrix()[nx][ny] != nullptr){
                    A.GetAnimalMatrix()[nx][ny]->printSound();
                    found = true;
                }
            }
    }
    cout << "------------------\n";
    cout << '\n';
}

void Player::FillWaterContainer(){
    cout << "You Filled the water container\n";
    cout << '\n';
    if (getwaterContainer() + FILL_WATER_CONTAINER >= MAX_WATER_CONTAINER){
        setwaterContainer(MAX_WATER_CONTAINER);
    }else {
        setwaterContainer(getwaterContainer() + FILL_WATER_CONTAINER);
    }
}

void Player::SellAllProduct(){
    cout << "You sell all your product in inventory!\n";
    cout << '\n';
    int size_inventory = Inventory.size();
    for (int i = 0; i < size_inventory; i++){
        double profit = Inventory.get(i).getPrice();
        setmoney(getmoney() + profit);
    }
    Inventory.clear();
}

void Player::Interact(MatrixOfAnimal A, MatrixOfFacility F){
    cout << "---INTERACT COMMAND---\n";
    for (int i = 0; i < 4; i++){
        int nx = getposx() + dx[i];
        int ny = getposy() + dy[i];
        if (nx >= 0 && nx < F.GetBarMax() && ny >= 0 && ny < F.GetKolMax()){
            //valid position!
            if (A.GetAnimalMatrix()[nx][ny] != nullptr){
                //there is animal in position (nx,ny)

            }else if (F.GetFacility(nx, ny).GetTypeOfFacility() != '.'){
                //there is facility in position (nx, ny)
                char facility = F.GetFacility(nx, ny).GetTypeOfFacility();
                if (facility == 'W'){
                    FillWaterContainer();
                }else if (facility == 'T'){
                    SellAllProduct();
                }
            }
        }
    }
    cout << "------------------\n";
    cout << '\n';
}

void Player::Kill(MatrixOfAnimal& A, MatrixOfLand& L){
    cout << "---KILL COMMAND---\n";
    bool found = false;
    // Pengecekan animal disekitar player(atas, bawah, kiri, kanan)
    for (int i = 0; i < 4 && !found; i++){
        int nx = getposx() + dx[i];
        int ny = getposy() + dy[i];
        if (nx >= 0 && nx < A.GetBarMax() &&
            ny >= 0 && ny < A.GetKolMax()){
                if (A.GetAnimalMatrix()[nx][ny] != nullptr){
                    char jenis = A.GetAnimalMatrix()[nx][ny] -> render();
                    // Jika merupakan salah satu hewan penghasil daging,
                    // maka akan menambahkan ke inventori
                    if (jenis == 'D' || jenis == 'G' || jenis == 'R' || jenis == 'O'){
                        if (jenis == 'D'){
                            DuckMeat DM;
                            Inventory.add(DM);
                        } else if(jenis == 'G') {
                            GoatMeat GM;
                            Inventory.add(GM);
                        } else if(jenis == 'R') {
                            RabbitMeat RM;
                            Inventory.add(RM);
                        } else if(jenis == 'O') {
                            CowMeat OM;
                            Inventory.add(OM);
                        }

                        // Mengeset OccupiedStatus menjadi false
                        Land newland(nx, ny, L.GetLand(nx,ny).GetTypeOfLand(), false, L.GetLand(nx,ny).GetGrassStatus());
                        L.setLand(nx, ny, newland);

                        // Menghilangkan hewan dari map
                        A.GetAnimalMatrix()[nx][ny] = nullptr;
                        found = true;
                    }
                }
            }
    }
    cout << "------------------\n";
    cout << '\n';
}

void Player::Grow(MatrixOfLand& L){
    cout << "---GROW COMMAND---" << '\n';
    // Mendapatkan land yang sedang diinjak player
    int px = getposx();
    int py = getposy();
    Land pLand = L.GetLand(px, py);

    // Mengecek apakah land sudah ditumbuhi rumput atau belum
    // jika belum akan mengubah tipe land dan mengubah status land
    if (!pLand.GetGrassStatus()){
        if (waterContainer >= SIRAM){
            waterContainer -= SIRAM;
            if (pLand.GetTypeOfLand() == '0'){
                Land newland(px, py, '*', pLand.GetOccupiedStatus(), true);
                L.setLand(px, py, newland);
            }else if (pLand.GetTypeOfLand() == '-'){
                Land newland(px, py, '#', pLand.GetOccupiedStatus(), true);
                L.setLand(px, py, newland);
            }else if (pLand.GetTypeOfLand() == 'x'){
                Land newland(px, py, '@', pLand.GetOccupiedStatus(), true);
                L.setLand(px, py, newland);
            }
        }
    }
    cout << "------------------\n";
}

void Player::Mix(MatrixOfFacility F){
    cout << "--------------- MIX COMMAND ---------------\n";
    for (int i = 0; i < 4; i++){
        int nx = getposx() + dx[i];
        int ny = getposy() + dy[i];
        if (nx >= 0 && nx < F.GetBarMax() && ny >= 0 && ny < F.GetKolMax()){
            if (F.GetFacility(nx, ny).GetTypeOfFacility() == 'M') {
                int num;
                cout << "List Of Side Product\n";
                cout << "1. Burger\n";
                cout << "2. Carbonara\n";
                cout << "3. Pie Susu\n";
                cout << "4. Golden Meat Despacito\n";
                cout << "Choose Number of Side Product Do You Want :\n";
                cin >> num;

                if(num == 1) {
                    RabbitMeat RM;
                    int bahan1 = Inventory.find(RM);
                    DuckEgg DE
                    int bahan2 = Inventory.find(DE);
                    if(bahan1 != -1 && bahan2 != -1) {
                        Inventory.remove(RM);
                        Inventory.remove(DE);
                        Burger B;
                        Inventory.add(B);
                    }
                }

    cout << "-------------------------------------------\n";

}

// Fungsi untuk menampilkan inventori yang dimiliki ke layar
void Player::Print_Inventory(){
    int size_inventory = Inventory.size();
    cout << "---Your Inventory---\n";
    for (int i = 0; i < size_inventory; i++){
        Product produk = Inventory.get(i);
        cout << produk.getName() << '\n';
    }
    cout << "--------------------\n";
}
