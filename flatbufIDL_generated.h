// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_FLATBUFIDL_FLATBUFTEST_H_
#define FLATBUFFERS_GENERATED_FLATBUFIDL_FLATBUFTEST_H_

#include "flatbuffers/flatbuffers.h"

namespace FlatBufTest {

struct LongSeqTest;

struct DoubleSeqTest;

struct StringTest;

struct StringSeqTest;

struct ArrayLongSeqTest;

struct SeqArrayLongSeqTest;

struct TestCustomType;

struct LongSeqTest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_LONG_SEQ = 4
  };
  const flatbuffers::Vector<int32_t> *long_seq() const {
    return GetPointer<const flatbuffers::Vector<int32_t> *>(VT_LONG_SEQ);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_LONG_SEQ) &&
           verifier.VerifyVector(long_seq()) &&
           verifier.EndTable();
  }
};

struct LongSeqTestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_long_seq(flatbuffers::Offset<flatbuffers::Vector<int32_t>> long_seq) {
    fbb_.AddOffset(LongSeqTest::VT_LONG_SEQ, long_seq);
  }
  explicit LongSeqTestBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  LongSeqTestBuilder &operator=(const LongSeqTestBuilder &);
  flatbuffers::Offset<LongSeqTest> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<LongSeqTest>(end);
    return o;
  }
};

inline flatbuffers::Offset<LongSeqTest> CreateLongSeqTest(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<int32_t>> long_seq = 0) {
  LongSeqTestBuilder builder_(_fbb);
  builder_.add_long_seq(long_seq);
  return builder_.Finish();
}

inline flatbuffers::Offset<LongSeqTest> CreateLongSeqTestDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<int32_t> *long_seq = nullptr) {
  auto long_seq__ = long_seq ? _fbb.CreateVector<int32_t>(*long_seq) : 0;
  return FlatBufTest::CreateLongSeqTest(
      _fbb,
      long_seq__);
}

struct DoubleSeqTest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_DOUBLE_SEQ = 4
  };
  const flatbuffers::Vector<double> *double_seq() const {
    return GetPointer<const flatbuffers::Vector<double> *>(VT_DOUBLE_SEQ);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_DOUBLE_SEQ) &&
           verifier.VerifyVector(double_seq()) &&
           verifier.EndTable();
  }
};

struct DoubleSeqTestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_double_seq(flatbuffers::Offset<flatbuffers::Vector<double>> double_seq) {
    fbb_.AddOffset(DoubleSeqTest::VT_DOUBLE_SEQ, double_seq);
  }
  explicit DoubleSeqTestBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  DoubleSeqTestBuilder &operator=(const DoubleSeqTestBuilder &);
  flatbuffers::Offset<DoubleSeqTest> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<DoubleSeqTest>(end);
    return o;
  }
};

inline flatbuffers::Offset<DoubleSeqTest> CreateDoubleSeqTest(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<double>> double_seq = 0) {
  DoubleSeqTestBuilder builder_(_fbb);
  builder_.add_double_seq(double_seq);
  return builder_.Finish();
}

inline flatbuffers::Offset<DoubleSeqTest> CreateDoubleSeqTestDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<double> *double_seq = nullptr) {
  auto double_seq__ = double_seq ? _fbb.CreateVector<double>(*double_seq) : 0;
  return FlatBufTest::CreateDoubleSeqTest(
      _fbb,
      double_seq__);
}

struct StringTest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_STR = 4
  };
  const flatbuffers::Vector<int8_t> *str() const {
    return GetPointer<const flatbuffers::Vector<int8_t> *>(VT_STR);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_STR) &&
           verifier.VerifyVector(str()) &&
           verifier.EndTable();
  }
};

struct StringTestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_str(flatbuffers::Offset<flatbuffers::Vector<int8_t>> str) {
    fbb_.AddOffset(StringTest::VT_STR, str);
  }
  explicit StringTestBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  StringTestBuilder &operator=(const StringTestBuilder &);
  flatbuffers::Offset<StringTest> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<StringTest>(end);
    return o;
  }
};

inline flatbuffers::Offset<StringTest> CreateStringTest(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<int8_t>> str = 0) {
  StringTestBuilder builder_(_fbb);
  builder_.add_str(str);
  return builder_.Finish();
}

inline flatbuffers::Offset<StringTest> CreateStringTestDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<int8_t> *str = nullptr) {
  auto str__ = str ? _fbb.CreateVector<int8_t>(*str) : 0;
  return FlatBufTest::CreateStringTest(
      _fbb,
      str__);
}

struct StringSeqTest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_STRING_SEQ = 4
  };
  const flatbuffers::Vector<flatbuffers::Offset<FlatBufTest::StringTest>> *string_seq() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<FlatBufTest::StringTest>> *>(VT_STRING_SEQ);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_STRING_SEQ) &&
           verifier.VerifyVector(string_seq()) &&
           verifier.VerifyVectorOfTables(string_seq()) &&
           verifier.EndTable();
  }
};

struct StringSeqTestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_string_seq(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FlatBufTest::StringTest>>> string_seq) {
    fbb_.AddOffset(StringSeqTest::VT_STRING_SEQ, string_seq);
  }
  explicit StringSeqTestBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  StringSeqTestBuilder &operator=(const StringSeqTestBuilder &);
  flatbuffers::Offset<StringSeqTest> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<StringSeqTest>(end);
    return o;
  }
};

inline flatbuffers::Offset<StringSeqTest> CreateStringSeqTest(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FlatBufTest::StringTest>>> string_seq = 0) {
  StringSeqTestBuilder builder_(_fbb);
  builder_.add_string_seq(string_seq);
  return builder_.Finish();
}

inline flatbuffers::Offset<StringSeqTest> CreateStringSeqTestDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<FlatBufTest::StringTest>> *string_seq = nullptr) {
  auto string_seq__ = string_seq ? _fbb.CreateVector<flatbuffers::Offset<FlatBufTest::StringTest>>(*string_seq) : 0;
  return FlatBufTest::CreateStringSeqTest(
      _fbb,
      string_seq__);
}

struct ArrayLongSeqTest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ARRAY_LONG_SEQ = 4
  };
  const flatbuffers::Vector<flatbuffers::Offset<FlatBufTest::LongSeqTest>> *array_long_seq() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<FlatBufTest::LongSeqTest>> *>(VT_ARRAY_LONG_SEQ);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_ARRAY_LONG_SEQ) &&
           verifier.VerifyVector(array_long_seq()) &&
           verifier.VerifyVectorOfTables(array_long_seq()) &&
           verifier.EndTable();
  }
};

struct ArrayLongSeqTestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_array_long_seq(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FlatBufTest::LongSeqTest>>> array_long_seq) {
    fbb_.AddOffset(ArrayLongSeqTest::VT_ARRAY_LONG_SEQ, array_long_seq);
  }
  explicit ArrayLongSeqTestBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ArrayLongSeqTestBuilder &operator=(const ArrayLongSeqTestBuilder &);
  flatbuffers::Offset<ArrayLongSeqTest> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ArrayLongSeqTest>(end);
    return o;
  }
};

inline flatbuffers::Offset<ArrayLongSeqTest> CreateArrayLongSeqTest(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FlatBufTest::LongSeqTest>>> array_long_seq = 0) {
  ArrayLongSeqTestBuilder builder_(_fbb);
  builder_.add_array_long_seq(array_long_seq);
  return builder_.Finish();
}

inline flatbuffers::Offset<ArrayLongSeqTest> CreateArrayLongSeqTestDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<FlatBufTest::LongSeqTest>> *array_long_seq = nullptr) {
  auto array_long_seq__ = array_long_seq ? _fbb.CreateVector<flatbuffers::Offset<FlatBufTest::LongSeqTest>>(*array_long_seq) : 0;
  return FlatBufTest::CreateArrayLongSeqTest(
      _fbb,
      array_long_seq__);
}

struct SeqArrayLongSeqTest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SEQ_ARRAY_LONG_SEQ = 4
  };
  const flatbuffers::Vector<flatbuffers::Offset<FlatBufTest::ArrayLongSeqTest>> *seq_array_long_seq() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<FlatBufTest::ArrayLongSeqTest>> *>(VT_SEQ_ARRAY_LONG_SEQ);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_SEQ_ARRAY_LONG_SEQ) &&
           verifier.VerifyVector(seq_array_long_seq()) &&
           verifier.VerifyVectorOfTables(seq_array_long_seq()) &&
           verifier.EndTable();
  }
};

struct SeqArrayLongSeqTestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_seq_array_long_seq(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FlatBufTest::ArrayLongSeqTest>>> seq_array_long_seq) {
    fbb_.AddOffset(SeqArrayLongSeqTest::VT_SEQ_ARRAY_LONG_SEQ, seq_array_long_seq);
  }
  explicit SeqArrayLongSeqTestBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  SeqArrayLongSeqTestBuilder &operator=(const SeqArrayLongSeqTestBuilder &);
  flatbuffers::Offset<SeqArrayLongSeqTest> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<SeqArrayLongSeqTest>(end);
    return o;
  }
};

inline flatbuffers::Offset<SeqArrayLongSeqTest> CreateSeqArrayLongSeqTest(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FlatBufTest::ArrayLongSeqTest>>> seq_array_long_seq = 0) {
  SeqArrayLongSeqTestBuilder builder_(_fbb);
  builder_.add_seq_array_long_seq(seq_array_long_seq);
  return builder_.Finish();
}

inline flatbuffers::Offset<SeqArrayLongSeqTest> CreateSeqArrayLongSeqTestDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<FlatBufTest::ArrayLongSeqTest>> *seq_array_long_seq = nullptr) {
  auto seq_array_long_seq__ = seq_array_long_seq ? _fbb.CreateVector<flatbuffers::Offset<FlatBufTest::ArrayLongSeqTest>>(*seq_array_long_seq) : 0;
  return FlatBufTest::CreateSeqArrayLongSeqTest(
      _fbb,
      seq_array_long_seq__);
}

struct TestCustomType FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TEST_LONG = 4,
    VT_TEST_OCTET = 6,
    VT_TEST_LONG_SEQ = 8,
    VT_TEST_STRING = 10,
    VT_TEST_STRING_SEQ = 12,
    VT_TEST_DOUBLE_SEQ = 14,
    VT_TEST_ARRAY_LONG_SEQ = 16,
    VT_SEQ_ARRAY_LONG_SEQ_TEST = 18
  };
  int32_t test_long() const {
    return GetField<int32_t>(VT_TEST_LONG, 0);
  }
  const flatbuffers::Vector<int8_t> *test_octet() const {
    return GetPointer<const flatbuffers::Vector<int8_t> *>(VT_TEST_OCTET);
  }
  const FlatBufTest::LongSeqTest *test_long_seq() const {
    return GetPointer<const FlatBufTest::LongSeqTest *>(VT_TEST_LONG_SEQ);
  }
  const FlatBufTest::StringTest *test_string() const {
    return GetPointer<const FlatBufTest::StringTest *>(VT_TEST_STRING);
  }
  const FlatBufTest::StringSeqTest *test_string_seq() const {
    return GetPointer<const FlatBufTest::StringSeqTest *>(VT_TEST_STRING_SEQ);
  }
  const FlatBufTest::DoubleSeqTest *test_double_seq() const {
    return GetPointer<const FlatBufTest::DoubleSeqTest *>(VT_TEST_DOUBLE_SEQ);
  }
  const FlatBufTest::ArrayLongSeqTest *test_array_long_seq() const {
    return GetPointer<const FlatBufTest::ArrayLongSeqTest *>(VT_TEST_ARRAY_LONG_SEQ);
  }
  const FlatBufTest::SeqArrayLongSeqTest *seq_array_long_seq_test() const {
    return GetPointer<const FlatBufTest::SeqArrayLongSeqTest *>(VT_SEQ_ARRAY_LONG_SEQ_TEST);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_TEST_LONG) &&
           VerifyOffset(verifier, VT_TEST_OCTET) &&
           verifier.VerifyVector(test_octet()) &&
           VerifyOffset(verifier, VT_TEST_LONG_SEQ) &&
           verifier.VerifyTable(test_long_seq()) &&
           VerifyOffset(verifier, VT_TEST_STRING) &&
           verifier.VerifyTable(test_string()) &&
           VerifyOffset(verifier, VT_TEST_STRING_SEQ) &&
           verifier.VerifyTable(test_string_seq()) &&
           VerifyOffset(verifier, VT_TEST_DOUBLE_SEQ) &&
           verifier.VerifyTable(test_double_seq()) &&
           VerifyOffset(verifier, VT_TEST_ARRAY_LONG_SEQ) &&
           verifier.VerifyTable(test_array_long_seq()) &&
           VerifyOffset(verifier, VT_SEQ_ARRAY_LONG_SEQ_TEST) &&
           verifier.VerifyTable(seq_array_long_seq_test()) &&
           verifier.EndTable();
  }
};

struct TestCustomTypeBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_test_long(int32_t test_long) {
    fbb_.AddElement<int32_t>(TestCustomType::VT_TEST_LONG, test_long, 0);
  }
  void add_test_octet(flatbuffers::Offset<flatbuffers::Vector<int8_t>> test_octet) {
    fbb_.AddOffset(TestCustomType::VT_TEST_OCTET, test_octet);
  }
  void add_test_long_seq(flatbuffers::Offset<FlatBufTest::LongSeqTest> test_long_seq) {
    fbb_.AddOffset(TestCustomType::VT_TEST_LONG_SEQ, test_long_seq);
  }
  void add_test_string(flatbuffers::Offset<FlatBufTest::StringTest> test_string) {
    fbb_.AddOffset(TestCustomType::VT_TEST_STRING, test_string);
  }
  void add_test_string_seq(flatbuffers::Offset<FlatBufTest::StringSeqTest> test_string_seq) {
    fbb_.AddOffset(TestCustomType::VT_TEST_STRING_SEQ, test_string_seq);
  }
  void add_test_double_seq(flatbuffers::Offset<FlatBufTest::DoubleSeqTest> test_double_seq) {
    fbb_.AddOffset(TestCustomType::VT_TEST_DOUBLE_SEQ, test_double_seq);
  }
  void add_test_array_long_seq(flatbuffers::Offset<FlatBufTest::ArrayLongSeqTest> test_array_long_seq) {
    fbb_.AddOffset(TestCustomType::VT_TEST_ARRAY_LONG_SEQ, test_array_long_seq);
  }
  void add_seq_array_long_seq_test(flatbuffers::Offset<FlatBufTest::SeqArrayLongSeqTest> seq_array_long_seq_test) {
    fbb_.AddOffset(TestCustomType::VT_SEQ_ARRAY_LONG_SEQ_TEST, seq_array_long_seq_test);
  }
  explicit TestCustomTypeBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TestCustomTypeBuilder &operator=(const TestCustomTypeBuilder &);
  flatbuffers::Offset<TestCustomType> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<TestCustomType>(end);
    return o;
  }
};

inline flatbuffers::Offset<TestCustomType> CreateTestCustomType(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t test_long = 0,
    flatbuffers::Offset<flatbuffers::Vector<int8_t>> test_octet = 0,
    flatbuffers::Offset<FlatBufTest::LongSeqTest> test_long_seq = 0,
    flatbuffers::Offset<FlatBufTest::StringTest> test_string = 0,
    flatbuffers::Offset<FlatBufTest::StringSeqTest> test_string_seq = 0,
    flatbuffers::Offset<FlatBufTest::DoubleSeqTest> test_double_seq = 0,
    flatbuffers::Offset<FlatBufTest::ArrayLongSeqTest> test_array_long_seq = 0,
    flatbuffers::Offset<FlatBufTest::SeqArrayLongSeqTest> seq_array_long_seq_test = 0) {
  TestCustomTypeBuilder builder_(_fbb);
  builder_.add_seq_array_long_seq_test(seq_array_long_seq_test);
  builder_.add_test_array_long_seq(test_array_long_seq);
  builder_.add_test_double_seq(test_double_seq);
  builder_.add_test_string_seq(test_string_seq);
  builder_.add_test_string(test_string);
  builder_.add_test_long_seq(test_long_seq);
  builder_.add_test_octet(test_octet);
  builder_.add_test_long(test_long);
  return builder_.Finish();
}

inline flatbuffers::Offset<TestCustomType> CreateTestCustomTypeDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t test_long = 0,
    const std::vector<int8_t> *test_octet = nullptr,
    flatbuffers::Offset<FlatBufTest::LongSeqTest> test_long_seq = 0,
    flatbuffers::Offset<FlatBufTest::StringTest> test_string = 0,
    flatbuffers::Offset<FlatBufTest::StringSeqTest> test_string_seq = 0,
    flatbuffers::Offset<FlatBufTest::DoubleSeqTest> test_double_seq = 0,
    flatbuffers::Offset<FlatBufTest::ArrayLongSeqTest> test_array_long_seq = 0,
    flatbuffers::Offset<FlatBufTest::SeqArrayLongSeqTest> seq_array_long_seq_test = 0) {
  auto test_octet__ = test_octet ? _fbb.CreateVector<int8_t>(*test_octet) : 0;
  return FlatBufTest::CreateTestCustomType(
      _fbb,
      test_long,
      test_octet__,
      test_long_seq,
      test_string,
      test_string_seq,
      test_double_seq,
      test_array_long_seq,
      seq_array_long_seq_test);
}

inline const FlatBufTest::TestCustomType *GetTestCustomType(const void *buf) {
  return flatbuffers::GetRoot<FlatBufTest::TestCustomType>(buf);
}

inline const FlatBufTest::TestCustomType *GetSizePrefixedTestCustomType(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<FlatBufTest::TestCustomType>(buf);
}

inline bool VerifyTestCustomTypeBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<FlatBufTest::TestCustomType>(nullptr);
}

inline bool VerifySizePrefixedTestCustomTypeBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<FlatBufTest::TestCustomType>(nullptr);
}

inline void FinishTestCustomTypeBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<FlatBufTest::TestCustomType> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedTestCustomTypeBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<FlatBufTest::TestCustomType> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace FlatBufTest

#endif  // FLATBUFFERS_GENERATED_FLATBUFIDL_FLATBUFTEST_H_