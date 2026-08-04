<<<<<<< HEAD
=======
<<<<<<< HEAD
#include<iostream>
#include<vector>    
    using namespace std;
vector<double> convertTemp(double celcius){
    double kelvin = celcius + 273.15;
    double fahrenheit = (celcius * 1.8) + 32.0;
    
    return {kelvin, fahrenheit};
}
int main(){
    double celcius = 36.6;
    vector<double> ans = convertTemp(celcius);
    cout<<"Tempreature in Kelvin : "<<ans[0]<<"\nTempreature in Fahrenheit : "<<ans[1]<<endl;
    return 0;
=======
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
#include<iostream>
#include<vector>    
    using namespace std;
vector<double> convertTemp(double celcius){
    double kelvin = celcius + 273.15;
    double fahrenheit = (celcius * 1.8) + 32.0;
    
    return {kelvin, fahrenheit};
}
int main(){
    double celcius = 36.6;
    vector<double> ans = convertTemp(celcius);
    cout<<"Tempreature in Kelvin : "<<ans[0]<<"\nTempreature in Fahrenheit : "<<ans[1]<<endl;
    return 0;
<<<<<<< HEAD
}
=======
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
}
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
