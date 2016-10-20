Stock::stock(const string & co, long n, double pr)
{
        company = co;
        
        if (n < 0)
        {
                std::cerr << "Number of shares can't be nagative;"
                          << company << " shares set to 0.\n";
                shares = 0;
        }
        else 
                shares = n;
        share_val = pr;
        set_tot();
}

// Using constructors 
Stock food = Stock("World Cabbage", 250, 1.25);

Stock garment("Furry Mason", 50, 2.5);
Stock *pstock = new Stock("Electroshok Games", 18, 19.0);

Stock::Stock() { } // default constructor 

Stock::Stock() 
{
        company = "no name"
        shares = 0;
        share_val = 0.0;
        total_val = 0.0;
}

