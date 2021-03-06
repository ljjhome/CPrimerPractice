#ifndef BULK_QUOTE_HPP
#define BULK_QUOTE_HPP
#include "Quote.hpp"
#include "Disc_quote.hpp"
class Bulk_quote: public Disc_quote{
public:
	
    Bulk_quote() = default;
    Bulk_quote(const std::string & s, double price, std::size_t sz = 0, double dis = 0.0): Disc_quote(s,price,sz,dis){}
    Bulk_quote(const Bulk_quote & b):Disc_quote(b){std::cout<<"Bulk_quote(const Bulk_quote&)"<<std::endl;}
	
//	using Disc_quote::Disc_quote;
    double net_price(std::size_t n) const override;
    void debug() override{
        std::cout << "string bookNo;"<<"double price;" <<"size_t min_qty;"<<"double discount;"<<std::endl;
    }
	Bulk_quote * clone() const & override;
	Bulk_quote * clone() && override; 
	virtual ~Bulk_quote(){std::cout << "~Bulk_quote()"<<std::endl;}
};

	Bulk_quote * Bulk_quote::clone() const &{return new Bulk_quote(*this);} 
	Bulk_quote * Bulk_quote::clone() && {return new Bulk_quote(std::move(*this));}
double Bulk_quote::net_price(size_t n ) const{
    if(n >= num){
        return n * (1 - discount) * price; 
    }
    else{
        return n * price; 
    }
}

#endif //BULK_QUOTE_HPP
