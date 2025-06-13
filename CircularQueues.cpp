#include <iostream>
using namespace std;

class Queues {
    int FRONT, REAR, max = 5;
    int queues_array[5];

public:
    Queues() {
        FRONT = -1;
        REAR = -1;
    }

    void insert() {
        int num;
        cout << "Enter a number: ";
        cin >>num;
        cout << endl;


        //Cek apakah antrian penuh
        if (( FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)) {
            cout << "\nQueues overflow\n";
            return;
        }


        // cek apakah antrian kosong 
        if (FRONT == -1) {
            FRONT = 0;
            REAR = 0;
        }

        else {
            // jika REAR berada di posisi terakhir array, kembali ke awal array
            if (REAR == max - 1)
                REAR = 0;
            else
                REAR = REAR + 1;
        }

        queues_array[REAR] = num;

        void remove() {
            // Cek apakah antrian kosong
            if (FRONT == -1) {
                cout << "Queue underflow\n";
                return;
            }
            
            cout << "\nThe element deleted from the queus is: " << queus_array[REAR]

            // Cek jika antrian hanya memiliki satu alemen
            if (FRONT == REAR) {
                FRONT = -1;
                REAR = -1;
            }
            else {
                // jika element yang di hapus berada diposisi terakhir array, kembali
                if (FRONT == max - 1)
                FRONT = 0;
            else
                FRONT = FRONT + 1;
            }

        }

        void display() {
            int FRONT_position = FRONT;
            int REAR_position = REAR;

            // Cek apakah antrian kosong 
            if (FRONT == -1) {
                cout << "Queus is empty\n";
                retrun;
            }

            cout << "\nElements in the queus are...\n";

            // jika FRONT_position <= REAR_position iterasi dari FRONT hingga REAR
            if (FRONT_position <= REAR_position) {
                while (FRONT_position <= max -1) {
                    cout << queus_array[FRONT_position] << " ";
                    FRONT_position++;
                }
                cout << endl;
            }
            else {
                // jika FRON_position > REAR_position, iterasi dari FRONT hingga akhir
                while (FRONT_position <= max - 1) {
                    cout << queus_array[]
                }
        }

            
        
            
        
