#include "BaseDatos.h"

void add(map<string, set<string>>& BD) {
    fechas aho, mes, dia;
    fechas eve;
    string h, m, d, p;
    cout<<"Introduce Año-Mes-Día: "<<endl;
    cin>>aho.fe>>mes.fe>>dia.fe;
    
    if(aho.fe < 10) {
        h = to_string(aho.fe);
       h = "000" + h;
    } else if (aho.fe < 100 ) {
        h = to_string(aho.fe);
       h = "00" + h;  
    }   else if (aho.fe < 1000) {
        h = to_string(aho.fe);
        h = "0" + h; 
    } else {
       h = to_string(aho.fe);
    } 
    if(mes.fe>12) {
        cout<<"Month value is invalid: "<<mes.fe<<endl;
        exit(1);
    }  else if(mes.fe < 10) {
        m = to_string(mes.fe);
        m = "0" + m;
    } else {
        m = to_string(mes.fe);
    }
    if (dia.fe > 31) {
        cout<<"Day value is invalid: "<<dia.fe<<endl;
    exit(1);
    } else if (dia.fe < 10) {
        d = to_string(dia.fe);
        d = "0" + d;
    } else {
        d = to_string(dia.fe);
    }
    p = h + "-" + m +"-"+ d;
        cin.ignore();
         cout<<"Introduce el evento: ";
    getline(cin,eve.nom);
    
    BD[p].insert(eve.nom);
}
void print(map<string, set<string>>& BD) {
    for(auto& x : BD) {
        for(auto& y : x.second) {
             cout<<x.first<<": ";
            cout<<y<<endl;
        }
    }
}
void salir(string com); {
    cout<<"Gracias por usar nuestros servicios :) ";
    exit(1);
}