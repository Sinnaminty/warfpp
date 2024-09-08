/**
 * WarframeStat.us API
 * Simple API for data from the game Warframe. [Parser
 * Docs](https://wfcd.github.io/warframe-worldstate-parser/) [Items
 * Types](https://github.com/WFCD/warframe-items/blob/master/index.d.ts)
 *
 * The version of the OpenAPI document: 2.0.8
 * Contact: tobiah@protonmail.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.8.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * FissureModifiers_VoidT1.h
 *
 *
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_FissureModifiers_VoidT1_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_FissureModifiers_VoidT1_H_

#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
///
/// </summary>
class FissureModifiers_VoidT1 : public ModelBase {
public:
  FissureModifiers_VoidT1();
  virtual ~FissureModifiers_VoidT1();

  /////////////////////////////////////////////
  /// ModelBase overrides

  void validate() override;

  web::json::value toJson() const override;
  bool fromJson(const web::json::value &json) override;

  void toMultipart(std::shared_ptr<MultipartFormData> multipart,
                   const utility::string_t &namePrefix) const override;
  bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart,
                     const utility::string_t &namePrefix) override;

  /////////////////////////////////////////////
  /// FissureModifiers_VoidT1 members

  /// <summary>
  ///
  /// </summary>
  double getNum() const;
  bool numIsSet() const;
  void unsetNum();

  void setNum(double value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getValue() const;
  bool valueIsSet() const;
  void unsetValue();

  void setValue(const utility::string_t &value);

protected:
  double m_Num;
  bool m_NumIsSet;
  utility::string_t m_Value;
  bool m_ValueIsSet;
};

} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_FissureModifiers_VoidT1_H_ */
