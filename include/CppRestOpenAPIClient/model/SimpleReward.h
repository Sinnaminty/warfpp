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
 * SimpleReward.h
 *
 *
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_SimpleReward_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_SimpleReward_H_

#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
///
/// </summary>
class SimpleReward : public ModelBase {
public:
  SimpleReward();
  virtual ~SimpleReward();

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
  /// SimpleReward members

  /// <summary>
  /// Name of current reward
  /// </summary>
  utility::string_t getName() const;
  bool nameIsSet() const;
  void unsetName();

  void setName(const utility::string_t &value);

  /// <summary>
  /// Resource cost of item
  /// </summary>
  double getCost() const;
  bool costIsSet() const;
  void unsetCost();

  void setCost(double value);

protected:
  utility::string_t m_Name;
  bool m_NameIsSet;
  double m_Cost;
  bool m_CostIsSet;
};

} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_SimpleReward_H_ */
