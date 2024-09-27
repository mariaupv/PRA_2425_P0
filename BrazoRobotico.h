class BrazoRobotico{
	private:
		double x, y, z;
		int sujeto;

	public:
		BrazoRobotico(double x, double y, double z, int sujeto);

		int consultarX();

		int consultarY();
		
		int consultarZ();

		int consultarSujeto();	

		bool coger();

		bool soltar();

		void mover(double x, double y, double z);

};	

