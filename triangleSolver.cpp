#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Alert: This program is strictly for radians only." << endl << endl;

    string scenario;
    cout << "What variables do you have? (abc, Aab, Aac, Abc, Bab, Bac, Bbc, Cab, Cac, Cbc, ABa, ABb, ABc, ACa, ACb, ACc, BCa, BCb, BCc)" << endl;
    cin >> scenario;

    if(scenario == "abc"){
        double sa;
        double sb;
        double sc;
        cout << "a = ";
        cin >> sa;
        cout << "b = ";
        cin >> sb;
        cout << "c = ";
        cin >> sc;
        double aa = acos(((sb * sb) + (sc * sc) - (sa * sa)) / (2 * sb * sc));
        double ab = acos(((sa * sa) + (sc * sc) - (sb * sb)) / (2 * sa * sc));
        double ac = acos(((sa * sa) + (sb * sb) - (sc * sc)) / (2 * sa * sb));
        cout << "A = " << aa << ", B = " << ab << ", C = " << ac << endl;
    } else if(scenario == "Aab") {
        double aa;
        double sa;
        double sb;
        cout << "A = ";
        cin >> aa;
        cout << "a = ";
        cin >> sa;
        cout << "b = ";
        cin >> sb;
        double ab = asin(sb * sin(aa) / sa);
        double ac = (2 * M_PI) - (aa + ab);
        double sc = (sa * sin(ac) / sin(aa));
        cout << "B = " << ab << ", C = " << ac << ", c = " << sc << endl;
    } else if(scenario == "Aac") {
        double aa;
        double sa;
        double sc;
        cout << "A = ";
        cin >> aa;
        cout << "a = ";
        cin >> sa;
        cout << "c = ";
        cin >> sc;
        double ac = asin(sc * sin(aa) / sa);
        double ab = (2 * M_PI) - (aa + ac);
        double sb = sa * sin(ab) / sin(aa);
        cout << "B = " << ab << ", C = " << ac << ", b = " << sb << endl;
    } else if(scenario == "Abc") {
        double aa;
        double sb;
        double sc;
        cout << "A = ";
        cin >> aa;
        cout << "b = ";
        cin >> sb;
        cout << "c = ";
        cin >> sc;
        double sa = sqrt((sb * sb) + (sc * sc) - (2 * sb * sc * cos(aa)));
        double ab = asin(sb * sin(aa) / sa);
        double ac = asin(sc * sin(aa) / sa);
        cout << "B = " << ab << ", C = " << ac << ", a = " << sa << endl;
    } else if(scenario == "Bab") {
        double ab;
        double sa;
        double sb;
		cout << "B = ";
		cin >> ab;
		cout << "a = ";
		cin >> sa;
		cout << "b = ";
		cin >> sb;
        double aa = asin(sa * sin(ab) / sb);
        double ac = (2 * M_PI) - (aa + ab);
        double sc = sqrt((sa * sa) + (sb * sb) - (2 * sa * sb * sin(ac)));
		cout << "A = " << aa << ", C = " << ac << ", c = " << sc << endl;
    } else if(scenario == "Bac") {
        double ab;
        double sa;
        double sc;
		cout << "B = ";
		cin >> ab;
		cout << "a = ";
		cin >> sa;
		cout << "c = ";
		cin >> sc;
        double sb = sqrt((sa * sa) + (sc * sc) - (2 * sa * sc * cos(ab)));
        double aa = asin(sa * sin(ab) / sb);
        double ac = asin(sc * sin(ab) / sb);
		cout << "A = " << aa << ", C = " << ac << ", b = " << sb << endl;
    } else if(scenario == "Bbc") {
        double ab;
        double sb;
        double sc;
		cout << "B = ";
		cin >> ab;
		cout << "b = ";
		cin >> sb;
		cout << "c = ";
		cin >> sc;
        double ac = asin(sc * sin(ab) / sb);
        double aa = (2 * M_PI) - (ab + ac);
        double sa = sqrt((sb * sb) + (sc * sc) - (2 * sb * sc * cos(aa)));
		cout << "A = " << aa << ", C = " << ac << ", a = " << sa << endl;
    } else if(scenario == "Cab") {
        double ac;
        double sa;
        double sb;
		cout << "C = ";
		cin >> ac;
		cout << "a = ";
		cin >> sa;
		cout << "b = ";
		cin >> sb;
		double sc = sqrt((sa * sa) + (sb * sb) - (2 * sa * sb * cos(ac)));
        double aa = asin(sa * sin(ac) / sc);
        double ab = asin(sb * sin(ac) / sc);
		cout << "A = " << aa << ", B = " << ab << ", c = " << sc << endl;
    } else if(scenario == "Cac") {
        double ac;
        double sa;
        double sc;
		cout << "C = ";
		cin >> ac;
		cout << "a = ";
		cin >> sa;
		cout << "c = ";
		cin >> sc;
        double aa = asin(sa * sin(ac) / sc);
        double ab = (2 * M_PI) - (aa + ac);
        double sb = sqrt((sa * sa) + (sc * sc) - (2 * sa * sc * cos(ab)));
		cout << "A = " << aa << ", B = " << ab << ", b = " << sb << endl;
    } else if(scenario == "Cbc") {
        double ac;
        double sb;
        double sc;
		cout << "C = ";
		cin >> ac;
		cout << "b = ";
		cin >> sb;
		cout << "c = ";
		cin >> sc;
        double ab = asin(sb * sin(ac) / sc);
        double aa = (2 * M_PI) - (ab + ac);
        double sa = sqrt((sb * sb) + (sc * sc) - (2 * sb * sc * cos(aa)));
		cout << "A = " << aa << ", B = " << ab << ", a = " << sa << endl;
    } else if(scenario == "ABa") {
        double aa;
        double ab;
        double sa;
		cout << "A = ";
		cin >> aa;
		cout << "B = ";
		cin >> ab;
		cout << "a = ";
		cin >> sa;
        double ac = (2 * M_PI) - (aa + ab);
        double sb = sa * sin(ab) / sin(aa);
        double sc = sa * sin(ac) / sin(aa);
		cout << "C = " << ac << ", b = " << sb << ", c = " << sc << endl;
    } else if(scenario == "ABb") {
        double aa;
        double ab;
        double sb;
		cout << "A = ";
		cin >> aa;
		cout << "B = ";
		cin >> ab;
		cout << "b = ";
		cin >> sb;
        double ac = (2 * M_PI) - (aa + ab);
        double sa = sb * sin(aa) / sin(ab);
        double sc = sb * sin(ac) / sin(ab);
		cout << "C = " << ac << ", a = " << sa << ", c = " << sc << endl;
    } else if(scenario == "ABc") {
        double aa;
        double ab;
        double sc;
		cout << "A = ";
		cin >> aa;
		cout << "B = ";
		cin >> ab;
		cout << "c = ";
		cin >> sc;
        double ac = (2 * M_PI) - (aa + ab);
        double sa = sc * sin(aa) / sin(ac);
        double sb = sc * sin(ab) / sin(ac);
		cout << "C = " << ac << ", a = " << sa << ", b = " << sb << endl;
    } else if(scenario == "ACa") {
        double aa;
        double ac;
        double sa;
		cout << "A = ";
		cin >> aa;
		cout << "C = ";
		cin >> ac;
		cout << "a = ";
		cin >> sa;
        double ab = (2 * M_PI) - (aa + ac);
        double sb = sa * sin(ab) / sin(aa);
        double sc = sa * sin(ac) / sin(aa);
		cout << "B = " << ab << ", b = " << sb << ", c = " << sc << endl;
    } else if(scenario == "ACb") {
        double aa;
        double ac;
        double sb;
		cout << "A = ";
		cin >> aa;
		cout << "C = ";
		cin >> ac;
		cout << "b = ";
		cin >> sb;
        double ab = (2 * M_PI) - (aa + ac);
        double sa = sb * sin(aa) / sin(ab);
        double sc = sb * sin(ac) / sin(ab);
		cout << "B = " << ab << ", a = " << sa << ", c = " << sc << endl;
    } else if(scenario == "ACc") {
        double aa;
        double ac;
        double sc;
		cout << "A = ";
		cin >> aa;
		cout << "C = ";
		cin >> ac;
		cout << "c = ";
		cin >> sc;
        double ab = (2 * M_PI) - (aa + ac);
        double sa = sc * sin(aa) / sin(ac);
        double sb = sc * sin(ab) / sin(ac);
		cout << "B = " << ab << ", a = " << sa << ", b = " << sb << endl;
    } else if(scenario == "BCa") {
        double ab;
        double ac;
        double sa;
		cout << "B = ";
		cin >> ab;
		cout << "C = ";
		cin >> ac;
		cout << "a = ";
		cin >> sa;
        double aa = (2 * M_PI) - (ab + ac);
        double sb = sa * sin(ab) / sin(aa);
        double sc = sa * sin(ac) / sin(aa);
		cout << "A = " << aa << ", b = " << sb << ", c = " << sc << endl;
    } else if(scenario == "BCb") {
        double ab;
        double ac;
        double sb;
		cout << "B = ";
		cin >> ab;
		cout << "C = ";
		cin >> ac;
		cout << "b = ";
		cin >> sb;
        double aa = (2 * M_PI) - (ab + ac);
        double sa = sb * sin(aa) / sin(ab);
        double sc = sb * sin(ac) / sin(ab);
		cout << "A = " << aa << ", a = " << sa << ", c = " << sc << endl;
    } else if(scenario == "BCc") {
        double ab;
        double ac;
        double sc;
		cout << "B = ";
		cin >> ab;
		cout << "C = ";
		cin >> ac;
		cout << "c = ";
		cin >> sc;
        double aa = (2 * M_PI) - (ab + ac);
        double sa = sc * sin(aa) / sin(ac);
        double sb = sc * sin(ab) / sin(ac);
		cout << "A = " << aa << ", a = " << sa << ", b = " << sb << endl;
    } else {
        cout << "Error.";
    }

    return 0;
}
