void complex :: print()
{
	cout<<real;
	if(img>=0)
		cout<<"+";
	cout<<img<<"j"<<endl;
}

complex :: complex(int a, int b)
{
	real = a;
	img = b;
}

complex :: ~complex()
{
	cout<<"Complex destructor:"<<endl;
}

complex complex :: Add(complex e)
{
	complex temp;
	temp.real = real + e.real;
	temp.img = img + e.img;
	return temp;
}

complex & complex :: sub(complex &e)
{
        static complex temp;
        temp.real = real - e.real;
        temp.img = img - e.img;
        return temp;
}

