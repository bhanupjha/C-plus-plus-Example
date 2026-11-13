class complex
{
	int real, img;
	public: complex(int=0, int=0); // suitable object with parameters and uninitialised object
		void print();
		~complex();
		complex Add(complex);
		complex & sub(complex &);
};
