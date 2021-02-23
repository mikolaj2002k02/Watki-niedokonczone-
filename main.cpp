#include <iostream>
#include <vector>
#include <httplib.h>
#include <thread>

using namespace std;

void watekMain(int p) {

 httplib::Client cli("http://localhost");
        auto res = cli.Get("/test.php");
        cout << res;
        return 0;
}


{
	
    vector <thread *> threads1;

    thread *watek = new thread(watekMain, 1);
    threads1.push_back(watek);


    for (vector<thread *>::iterator it = threads1.begin(); it != threads1.end(); ++it) {
        (*it)->join(); //tablica wskaünikÛw na wπtki, a it to wskaünik na wskaünik
    }

    return 0;
}
