#include <string>

using namespace std;
class Invoice
{
public:
	Invoice();
	Invoice(string partNumber,string partDescription,int quant,double price);
	~Invoice(){cout<<"Destructing....";}
	void setPartNum(string partNumber);
	string getPartNum();
	void setPartDesc(string partDescription);
	string getPartDesc();
	void setQuantity(int quant);
	int getQuantity();
	void setPriceItem(double price);
	double getPriceItem();
	double getInvoiceAmount();///if quantity is not positive it should be set to 0


private:
	string partNum;//number of part
	string partDesc;///description of part
	int quantity;///quantity of purchase
	double priceItem;//price per item

};
