/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef EnumTestService_H
#define EnumTestService_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "EnumTest_types.h"



#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class EnumTestServiceIf {
 public:
  virtual ~EnumTestServiceIf() {}
  virtual MyEnum3::type testEnum(const MyEnum3::type enum1) = 0;
  virtual void testEnumList(std::vector<MyEnum3::type> & _return, const std::vector<MyEnum3::type> & enum1) = 0;
  virtual void testEnumSet(std::set<MyEnum3::type> & _return, const std::set<MyEnum3::type> & enum1) = 0;
  virtual void testEnumMap(std::map<MyEnum3::type, MyEnum3::type> & _return, const std::map<MyEnum3::type, MyEnum3::type> & enum1) = 0;
  virtual void testEnumStruct(EnumTestStruct& _return, const EnumTestStruct& enum1) = 0;
};

class EnumTestServiceIfFactory {
 public:
  typedef EnumTestServiceIf Handler;

  virtual ~EnumTestServiceIfFactory() {}

  virtual EnumTestServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(EnumTestServiceIf* /* handler */) = 0;
};

class EnumTestServiceIfSingletonFactory : virtual public EnumTestServiceIfFactory {
 public:
  EnumTestServiceIfSingletonFactory(const ::apache::thrift::stdcxx::shared_ptr<EnumTestServiceIf>& iface) : iface_(iface) {}
  virtual ~EnumTestServiceIfSingletonFactory() {}

  virtual EnumTestServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(EnumTestServiceIf* /* handler */) {}

 protected:
  ::apache::thrift::stdcxx::shared_ptr<EnumTestServiceIf> iface_;
};

class EnumTestServiceNull : virtual public EnumTestServiceIf {
 public:
  virtual ~EnumTestServiceNull() {}
  MyEnum3::type testEnum(const MyEnum3::type /* enum1 */) {
    MyEnum3::type _return = (MyEnum3::type)0;
    return _return;
  }
  void testEnumList(std::vector<MyEnum3::type> & /* _return */, const std::vector<MyEnum3::type> & /* enum1 */) {
    return;
  }
  void testEnumSet(std::set<MyEnum3::type> & /* _return */, const std::set<MyEnum3::type> & /* enum1 */) {
    return;
  }
  void testEnumMap(std::map<MyEnum3::type, MyEnum3::type> & /* _return */, const std::map<MyEnum3::type, MyEnum3::type> & /* enum1 */) {
    return;
  }
  void testEnumStruct(EnumTestStruct& /* _return */, const EnumTestStruct& /* enum1 */) {
    return;
  }
};

typedef struct _EnumTestService_testEnum_args__isset {
  _EnumTestService_testEnum_args__isset() : enum1(false) {}
  bool enum1 :1;
} _EnumTestService_testEnum_args__isset;

class EnumTestService_testEnum_args {
 public:

  EnumTestService_testEnum_args(const EnumTestService_testEnum_args&);
  EnumTestService_testEnum_args& operator=(const EnumTestService_testEnum_args&);
  EnumTestService_testEnum_args() : enum1((MyEnum3::type)0) {
  }

  virtual ~EnumTestService_testEnum_args() throw();
  MyEnum3::type enum1;

  _EnumTestService_testEnum_args__isset __isset;

  void __set_enum1(const MyEnum3::type val);

  bool operator == (const EnumTestService_testEnum_args & rhs) const
  {
    if (!(enum1 == rhs.enum1))
      return false;
    return true;
  }
  bool operator != (const EnumTestService_testEnum_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EnumTestService_testEnum_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class EnumTestService_testEnum_pargs {
 public:


  virtual ~EnumTestService_testEnum_pargs() throw();
  const MyEnum3::type* enum1;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _EnumTestService_testEnum_result__isset {
  _EnumTestService_testEnum_result__isset() : success(false) {}
  bool success :1;
} _EnumTestService_testEnum_result__isset;

class EnumTestService_testEnum_result {
 public:

  EnumTestService_testEnum_result(const EnumTestService_testEnum_result&);
  EnumTestService_testEnum_result& operator=(const EnumTestService_testEnum_result&);
  EnumTestService_testEnum_result() : success((MyEnum3::type)0) {
  }

  virtual ~EnumTestService_testEnum_result() throw();
  MyEnum3::type success;

  _EnumTestService_testEnum_result__isset __isset;

  void __set_success(const MyEnum3::type val);

  bool operator == (const EnumTestService_testEnum_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const EnumTestService_testEnum_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EnumTestService_testEnum_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _EnumTestService_testEnum_presult__isset {
  _EnumTestService_testEnum_presult__isset() : success(false) {}
  bool success :1;
} _EnumTestService_testEnum_presult__isset;

class EnumTestService_testEnum_presult {
 public:


  virtual ~EnumTestService_testEnum_presult() throw();
  MyEnum3::type* success;

  _EnumTestService_testEnum_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _EnumTestService_testEnumList_args__isset {
  _EnumTestService_testEnumList_args__isset() : enum1(false) {}
  bool enum1 :1;
} _EnumTestService_testEnumList_args__isset;

class EnumTestService_testEnumList_args {
 public:

  EnumTestService_testEnumList_args(const EnumTestService_testEnumList_args&);
  EnumTestService_testEnumList_args& operator=(const EnumTestService_testEnumList_args&);
  EnumTestService_testEnumList_args() {
  }

  virtual ~EnumTestService_testEnumList_args() throw();
  std::vector<MyEnum3::type>  enum1;

  _EnumTestService_testEnumList_args__isset __isset;

  void __set_enum1(const std::vector<MyEnum3::type> & val);

  bool operator == (const EnumTestService_testEnumList_args & rhs) const
  {
    if (!(enum1 == rhs.enum1))
      return false;
    return true;
  }
  bool operator != (const EnumTestService_testEnumList_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EnumTestService_testEnumList_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class EnumTestService_testEnumList_pargs {
 public:


  virtual ~EnumTestService_testEnumList_pargs() throw();
  const std::vector<MyEnum3::type> * enum1;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _EnumTestService_testEnumList_result__isset {
  _EnumTestService_testEnumList_result__isset() : success(false) {}
  bool success :1;
} _EnumTestService_testEnumList_result__isset;

class EnumTestService_testEnumList_result {
 public:

  EnumTestService_testEnumList_result(const EnumTestService_testEnumList_result&);
  EnumTestService_testEnumList_result& operator=(const EnumTestService_testEnumList_result&);
  EnumTestService_testEnumList_result() {
  }

  virtual ~EnumTestService_testEnumList_result() throw();
  std::vector<MyEnum3::type>  success;

  _EnumTestService_testEnumList_result__isset __isset;

  void __set_success(const std::vector<MyEnum3::type> & val);

  bool operator == (const EnumTestService_testEnumList_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const EnumTestService_testEnumList_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EnumTestService_testEnumList_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _EnumTestService_testEnumList_presult__isset {
  _EnumTestService_testEnumList_presult__isset() : success(false) {}
  bool success :1;
} _EnumTestService_testEnumList_presult__isset;

class EnumTestService_testEnumList_presult {
 public:


  virtual ~EnumTestService_testEnumList_presult() throw();
  std::vector<MyEnum3::type> * success;

  _EnumTestService_testEnumList_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _EnumTestService_testEnumSet_args__isset {
  _EnumTestService_testEnumSet_args__isset() : enum1(false) {}
  bool enum1 :1;
} _EnumTestService_testEnumSet_args__isset;

class EnumTestService_testEnumSet_args {
 public:

  EnumTestService_testEnumSet_args(const EnumTestService_testEnumSet_args&);
  EnumTestService_testEnumSet_args& operator=(const EnumTestService_testEnumSet_args&);
  EnumTestService_testEnumSet_args() {
  }

  virtual ~EnumTestService_testEnumSet_args() throw();
  std::set<MyEnum3::type>  enum1;

  _EnumTestService_testEnumSet_args__isset __isset;

  void __set_enum1(const std::set<MyEnum3::type> & val);

  bool operator == (const EnumTestService_testEnumSet_args & rhs) const
  {
    if (!(enum1 == rhs.enum1))
      return false;
    return true;
  }
  bool operator != (const EnumTestService_testEnumSet_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EnumTestService_testEnumSet_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class EnumTestService_testEnumSet_pargs {
 public:


  virtual ~EnumTestService_testEnumSet_pargs() throw();
  const std::set<MyEnum3::type> * enum1;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _EnumTestService_testEnumSet_result__isset {
  _EnumTestService_testEnumSet_result__isset() : success(false) {}
  bool success :1;
} _EnumTestService_testEnumSet_result__isset;

class EnumTestService_testEnumSet_result {
 public:

  EnumTestService_testEnumSet_result(const EnumTestService_testEnumSet_result&);
  EnumTestService_testEnumSet_result& operator=(const EnumTestService_testEnumSet_result&);
  EnumTestService_testEnumSet_result() {
  }

  virtual ~EnumTestService_testEnumSet_result() throw();
  std::set<MyEnum3::type>  success;

  _EnumTestService_testEnumSet_result__isset __isset;

  void __set_success(const std::set<MyEnum3::type> & val);

  bool operator == (const EnumTestService_testEnumSet_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const EnumTestService_testEnumSet_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EnumTestService_testEnumSet_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _EnumTestService_testEnumSet_presult__isset {
  _EnumTestService_testEnumSet_presult__isset() : success(false) {}
  bool success :1;
} _EnumTestService_testEnumSet_presult__isset;

class EnumTestService_testEnumSet_presult {
 public:


  virtual ~EnumTestService_testEnumSet_presult() throw();
  std::set<MyEnum3::type> * success;

  _EnumTestService_testEnumSet_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _EnumTestService_testEnumMap_args__isset {
  _EnumTestService_testEnumMap_args__isset() : enum1(false) {}
  bool enum1 :1;
} _EnumTestService_testEnumMap_args__isset;

class EnumTestService_testEnumMap_args {
 public:

  EnumTestService_testEnumMap_args(const EnumTestService_testEnumMap_args&);
  EnumTestService_testEnumMap_args& operator=(const EnumTestService_testEnumMap_args&);
  EnumTestService_testEnumMap_args() {
  }

  virtual ~EnumTestService_testEnumMap_args() throw();
  std::map<MyEnum3::type, MyEnum3::type>  enum1;

  _EnumTestService_testEnumMap_args__isset __isset;

  void __set_enum1(const std::map<MyEnum3::type, MyEnum3::type> & val);

  bool operator == (const EnumTestService_testEnumMap_args & rhs) const
  {
    if (!(enum1 == rhs.enum1))
      return false;
    return true;
  }
  bool operator != (const EnumTestService_testEnumMap_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EnumTestService_testEnumMap_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class EnumTestService_testEnumMap_pargs {
 public:


  virtual ~EnumTestService_testEnumMap_pargs() throw();
  const std::map<MyEnum3::type, MyEnum3::type> * enum1;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _EnumTestService_testEnumMap_result__isset {
  _EnumTestService_testEnumMap_result__isset() : success(false) {}
  bool success :1;
} _EnumTestService_testEnumMap_result__isset;

class EnumTestService_testEnumMap_result {
 public:

  EnumTestService_testEnumMap_result(const EnumTestService_testEnumMap_result&);
  EnumTestService_testEnumMap_result& operator=(const EnumTestService_testEnumMap_result&);
  EnumTestService_testEnumMap_result() {
  }

  virtual ~EnumTestService_testEnumMap_result() throw();
  std::map<MyEnum3::type, MyEnum3::type>  success;

  _EnumTestService_testEnumMap_result__isset __isset;

  void __set_success(const std::map<MyEnum3::type, MyEnum3::type> & val);

  bool operator == (const EnumTestService_testEnumMap_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const EnumTestService_testEnumMap_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EnumTestService_testEnumMap_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _EnumTestService_testEnumMap_presult__isset {
  _EnumTestService_testEnumMap_presult__isset() : success(false) {}
  bool success :1;
} _EnumTestService_testEnumMap_presult__isset;

class EnumTestService_testEnumMap_presult {
 public:


  virtual ~EnumTestService_testEnumMap_presult() throw();
  std::map<MyEnum3::type, MyEnum3::type> * success;

  _EnumTestService_testEnumMap_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _EnumTestService_testEnumStruct_args__isset {
  _EnumTestService_testEnumStruct_args__isset() : enum1(false) {}
  bool enum1 :1;
} _EnumTestService_testEnumStruct_args__isset;

class EnumTestService_testEnumStruct_args {
 public:

  EnumTestService_testEnumStruct_args(const EnumTestService_testEnumStruct_args&);
  EnumTestService_testEnumStruct_args& operator=(const EnumTestService_testEnumStruct_args&);
  EnumTestService_testEnumStruct_args() {
  }

  virtual ~EnumTestService_testEnumStruct_args() throw();
  EnumTestStruct enum1;

  _EnumTestService_testEnumStruct_args__isset __isset;

  void __set_enum1(const EnumTestStruct& val);

  bool operator == (const EnumTestService_testEnumStruct_args & rhs) const
  {
    if (!(enum1 == rhs.enum1))
      return false;
    return true;
  }
  bool operator != (const EnumTestService_testEnumStruct_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EnumTestService_testEnumStruct_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class EnumTestService_testEnumStruct_pargs {
 public:


  virtual ~EnumTestService_testEnumStruct_pargs() throw();
  const EnumTestStruct* enum1;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _EnumTestService_testEnumStruct_result__isset {
  _EnumTestService_testEnumStruct_result__isset() : success(false) {}
  bool success :1;
} _EnumTestService_testEnumStruct_result__isset;

class EnumTestService_testEnumStruct_result {
 public:

  EnumTestService_testEnumStruct_result(const EnumTestService_testEnumStruct_result&);
  EnumTestService_testEnumStruct_result& operator=(const EnumTestService_testEnumStruct_result&);
  EnumTestService_testEnumStruct_result() {
  }

  virtual ~EnumTestService_testEnumStruct_result() throw();
  EnumTestStruct success;

  _EnumTestService_testEnumStruct_result__isset __isset;

  void __set_success(const EnumTestStruct& val);

  bool operator == (const EnumTestService_testEnumStruct_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const EnumTestService_testEnumStruct_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EnumTestService_testEnumStruct_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _EnumTestService_testEnumStruct_presult__isset {
  _EnumTestService_testEnumStruct_presult__isset() : success(false) {}
  bool success :1;
} _EnumTestService_testEnumStruct_presult__isset;

class EnumTestService_testEnumStruct_presult {
 public:


  virtual ~EnumTestService_testEnumStruct_presult() throw();
  EnumTestStruct* success;

  _EnumTestService_testEnumStruct_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class EnumTestServiceClient : virtual public EnumTestServiceIf {
 public:
  EnumTestServiceClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  EnumTestServiceClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  MyEnum3::type testEnum(const MyEnum3::type enum1);
  void send_testEnum(const MyEnum3::type enum1);
  MyEnum3::type recv_testEnum();
  void testEnumList(std::vector<MyEnum3::type> & _return, const std::vector<MyEnum3::type> & enum1);
  void send_testEnumList(const std::vector<MyEnum3::type> & enum1);
  void recv_testEnumList(std::vector<MyEnum3::type> & _return);
  void testEnumSet(std::set<MyEnum3::type> & _return, const std::set<MyEnum3::type> & enum1);
  void send_testEnumSet(const std::set<MyEnum3::type> & enum1);
  void recv_testEnumSet(std::set<MyEnum3::type> & _return);
  void testEnumMap(std::map<MyEnum3::type, MyEnum3::type> & _return, const std::map<MyEnum3::type, MyEnum3::type> & enum1);
  void send_testEnumMap(const std::map<MyEnum3::type, MyEnum3::type> & enum1);
  void recv_testEnumMap(std::map<MyEnum3::type, MyEnum3::type> & _return);
  void testEnumStruct(EnumTestStruct& _return, const EnumTestStruct& enum1);
  void send_testEnumStruct(const EnumTestStruct& enum1);
  void recv_testEnumStruct(EnumTestStruct& _return);
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class EnumTestServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::apache::thrift::stdcxx::shared_ptr<EnumTestServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (EnumTestServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_testEnum(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_testEnumList(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_testEnumSet(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_testEnumMap(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_testEnumStruct(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  EnumTestServiceProcessor(::apache::thrift::stdcxx::shared_ptr<EnumTestServiceIf> iface) :
    iface_(iface) {
    processMap_["testEnum"] = &EnumTestServiceProcessor::process_testEnum;
    processMap_["testEnumList"] = &EnumTestServiceProcessor::process_testEnumList;
    processMap_["testEnumSet"] = &EnumTestServiceProcessor::process_testEnumSet;
    processMap_["testEnumMap"] = &EnumTestServiceProcessor::process_testEnumMap;
    processMap_["testEnumStruct"] = &EnumTestServiceProcessor::process_testEnumStruct;
  }

  virtual ~EnumTestServiceProcessor() {}
};

class EnumTestServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  EnumTestServiceProcessorFactory(const ::apache::thrift::stdcxx::shared_ptr< EnumTestServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::apache::thrift::stdcxx::shared_ptr< EnumTestServiceIfFactory > handlerFactory_;
};

class EnumTestServiceMultiface : virtual public EnumTestServiceIf {
 public:
  EnumTestServiceMultiface(std::vector<apache::thrift::stdcxx::shared_ptr<EnumTestServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~EnumTestServiceMultiface() {}
 protected:
  std::vector<apache::thrift::stdcxx::shared_ptr<EnumTestServiceIf> > ifaces_;
  EnumTestServiceMultiface() {}
  void add(::apache::thrift::stdcxx::shared_ptr<EnumTestServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  MyEnum3::type testEnum(const MyEnum3::type enum1) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->testEnum(enum1);
    }
    return ifaces_[i]->testEnum(enum1);
  }

  void testEnumList(std::vector<MyEnum3::type> & _return, const std::vector<MyEnum3::type> & enum1) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->testEnumList(_return, enum1);
    }
    ifaces_[i]->testEnumList(_return, enum1);
    return;
  }

  void testEnumSet(std::set<MyEnum3::type> & _return, const std::set<MyEnum3::type> & enum1) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->testEnumSet(_return, enum1);
    }
    ifaces_[i]->testEnumSet(_return, enum1);
    return;
  }

  void testEnumMap(std::map<MyEnum3::type, MyEnum3::type> & _return, const std::map<MyEnum3::type, MyEnum3::type> & enum1) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->testEnumMap(_return, enum1);
    }
    ifaces_[i]->testEnumMap(_return, enum1);
    return;
  }

  void testEnumStruct(EnumTestStruct& _return, const EnumTestStruct& enum1) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->testEnumStruct(_return, enum1);
    }
    ifaces_[i]->testEnumStruct(_return, enum1);
    return;
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class EnumTestServiceConcurrentClient : virtual public EnumTestServiceIf {
 public:
  EnumTestServiceConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  EnumTestServiceConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  MyEnum3::type testEnum(const MyEnum3::type enum1);
  int32_t send_testEnum(const MyEnum3::type enum1);
  MyEnum3::type recv_testEnum(const int32_t seqid);
  void testEnumList(std::vector<MyEnum3::type> & _return, const std::vector<MyEnum3::type> & enum1);
  int32_t send_testEnumList(const std::vector<MyEnum3::type> & enum1);
  void recv_testEnumList(std::vector<MyEnum3::type> & _return, const int32_t seqid);
  void testEnumSet(std::set<MyEnum3::type> & _return, const std::set<MyEnum3::type> & enum1);
  int32_t send_testEnumSet(const std::set<MyEnum3::type> & enum1);
  void recv_testEnumSet(std::set<MyEnum3::type> & _return, const int32_t seqid);
  void testEnumMap(std::map<MyEnum3::type, MyEnum3::type> & _return, const std::map<MyEnum3::type, MyEnum3::type> & enum1);
  int32_t send_testEnumMap(const std::map<MyEnum3::type, MyEnum3::type> & enum1);
  void recv_testEnumMap(std::map<MyEnum3::type, MyEnum3::type> & _return, const int32_t seqid);
  void testEnumStruct(EnumTestStruct& _return, const EnumTestStruct& enum1);
  int32_t send_testEnumStruct(const EnumTestStruct& enum1);
  void recv_testEnumStruct(EnumTestStruct& _return, const int32_t seqid);
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif



#endif
