class IDatabase {
public:
	virtual void insertData(string& data) = 0;
	virtual ~IDatabase();
};

class Database:public IDatabase {
public:
	void insertData(string& data) override {
		cout << "Inserting " << data << " into database" << endl;
	}
};

class DataProcessor {
public:
	void processData(vector<string>& data, IDatabase& addi) {
		for (auto i : data) {
			addi.insertData(i);
		}
	}
};


int main() {
	
	vector<string> data = { "data1","data2","data3" };
	Database base;
	DataProcessor process;
	process.processData(data, base);
}
