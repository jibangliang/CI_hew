int sampleTest(int a);
    int sub_sampleTest(int a);
    
    int sampleTest(int a){
        int ret;
        ret = sub_sampleTest(a);
        return ret;
    }

    int sub_sampleTest(int a){
    	
        return a;
    }
