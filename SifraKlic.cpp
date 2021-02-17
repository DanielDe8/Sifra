#include <iostream>
#include <string>

int main(void) {

	bool o = true;
	while(o) {
		std::cout << std::endl;
		std::cout << "Zadejte slovo k zasifrovani: ";
		std::string s; std::cin >> s;
		std::cout << "Zadejte klic: ";
		int posun; std::cin >> posun;
		std::cout << std::endl;
		std::cout << "# # # # # # # # # # # # # # # # # # # # # # # # # #" << std::endl;
		std::cout << "#" << std::endl;
		std::cout << "#  " << "Puvodni zprava: " << s << std::endl;

		// hlavni cyklus
		for (int i = 0; i < s.length(); i++)
		{
		    s[i] = s[i] + posun;
		    if (s[i] > 'z') // kontrola preteceni
		        s[i] = s[i] - 26;
		}




		std::cout << "#  " << "Zasifrovana zprava: " << s << std::endl;
		std::cout << "#" << std::endl;
		std::cout << "# # # # # # # # # # # # # # # # # # # # # # # # # #" << std::endl;
		std::cout << std::endl;
		std::cout << "Prejete si program spustit znovu[ano/ne]" << std::endl;

		bool ot = true;
		std::string a; std::cin >> a;

		std::string at; at = a;//at = a.tolower()

		while (ot)
		{
			if (at == "ano" || at == "an" ||at == "a")
			{
				o = true;
				ot = false;
			}
			else if (at == "ne" || at == "n")
			{
				o = false;
				ot = false;
			}
		}
	}
	return 0;
}