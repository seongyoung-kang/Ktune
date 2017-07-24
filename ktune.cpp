#include<boost/python.hpp>
#include<iostream>

using namespace std;

class Sequential
{
	private:
	
	public:
	void help(void)
	{
		cout<<"here is the function of Ktune\n\n"<<endl;
		cout<<"1. network\n";
		cout<<"This is a function that determines what kind of network to use\n ";
		cout<<".networkd(""kind of network"") \n";
		cout<<"example : .network(""fully connected"") \n\n";

		cout<<"2. add\n";
		cout<<"This is a function that add layer\n ";
		cout<<".add(""number of layer , 1st layer number(input layer) , 2nd layer number ...., output layer number"") \n";
		cout<<"example : .add(""4, 784 , 120 , 40 , 10"") \n\n";

		cout<<"3. action\n";
		cout<<"This is a function that setting action function\n ";
		cout<<".action(""action function name"") \n";
		cout<<"example : .action(""sigmoid"") \n\n";


		cout<<"4. loss\n";
		cout<<"This is a function that setting loss function\n ";
		cout<<".loss(""loss function name"") \n";
		cout<<"example : .loss(""mean_squared_error"") \n\n";


		cout<<"5. optimizer\n";
		cout<<"This is a function that setting optimizer function\n ";
		cout<<".optimizer(""optimizer function name"") \n";
		cout<<"example : .optimizerz(""sgd"") \n\n";


		cout<<"6. data\n";
		cout<<"This is a function that setting determines what kind of data to use\n ";
		cout<<".data(""data name"") \n";
		cout<<"example : .data(""mnist"") \n\n";


		cout<<"7. fit\n";
		cout<<"This is a function that training data \n ";
		cout<<".fit(""EPOCH,Batch_size"") \n";
		cout<<"example : .fit(""5,100"") \n\n";
	}
	
	/*void size(int num_layer ,...)
    {
		this->num_layer = num_layer;
		layer_size = new int[num_layer];
	
		//layer_size array make
		va_list ap;	int arg; int i;
		va_start(ap,num_layer);
		for(i=0;i<num_layer;i++)
			layer_size[i] = va_arg(ap,int);
		//make layer_size array is done

		ac_weight = new int[num_layer];
		ac_neuron = new int[num_layer];

		int before_ac_weights = 0;
    	int before_ac_neurals = 0;

		for (i = 0; i < num_layer; i++)
		{
        	ac_neuron[i] = layer_size[i] + before_ac_neurals;//ac_neuron은 여태 누적한 neuron갯수..
        	before_ac_neurals = ac_neuron[i];

        	if (i == num_layer-1)
            	continue;

        	ac_weight[i] =  layer_size[i] *  layer_size[i+1] + before_ac_weights; //ac_weight는 여태 누적한 weight 의 갯수..
        	before_ac_weights =  ac_weight[i]; 
    	}   

     neuron = new float[mini_batch_size * TOTAL_NEURONS(net)]; //neuron 배열의 크기는 minibatch_size * 총 뉴련의 숫자
     zs = new float[mini_batch_size * TOTAL_NEURONS(net)];
     error =  new float[mini_batch_size * TOTAL_NEURONS(net)];
     bias = new float[TOTAL_NEURONS(net)];
     weight = new float[TOTAL_WEIGHTS(net)];

    for (i = 0; i < TOTAL_WEIGHTS(net); i++) {
         weight[i] = randn();
    }   

    for (i = 0; i < TOTAL_NEURONS(net); i++) {
         bias[i] = randn();
    }   

    }*/ 

};

using namespace boost::python;

BOOST_PYTHON_MODULE(Ktune)
{
    class_<Sequential>("Sequential")
          .def("help",&Sequential::help)
        ;   
};using namespace boost::python;


