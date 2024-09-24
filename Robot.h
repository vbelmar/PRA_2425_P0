class BrazoRobotico{
	private:
		double coorx;
		double coory;
		double coorz;
		bool sujeta;
	public:
		BrazoRobotico(double coorx, double coory, double coorz, bool sujeta);
		~BrazoRobotico();
		double consx() const;
		double consy() const;
		double consz() const;
		bool conss() const;
		void coger();
		void soltar();
		void mover(double coorx, double coory, double coorz);

};
