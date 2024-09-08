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
 * VoidTrader_allOf_inventory.h
 *
 *
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_VoidTrader_allOf_inventory_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_VoidTrader_allOf_inventory_H_

#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
///
/// </summary>
class VoidTrader_allOf_inventory : public ModelBase {
public:
  VoidTrader_allOf_inventory();
  virtual ~VoidTrader_allOf_inventory();

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
  /// VoidTrader_allOf_inventory members

  /// <summary>
  /// Item that is being sold
  /// </summary>
  utility::string_t getItem() const;
  bool itemIsSet() const;
  void unsetItem();

  void setItem(const utility::string_t &value);

  /// <summary>
  /// Amount of ducats required to purchase item
  /// </summary>
  double getDucats() const;
  bool ducatsIsSet() const;
  void unsetDucats();

  void setDucats(double value);

  /// <summary>
  /// Amount of credits required to purchase item
  /// </summary>
  double getCredits() const;
  bool creditsIsSet() const;
  void unsetCredits();

  void setCredits(double value);

protected:
  utility::string_t m_Item;
  bool m_ItemIsSet;
  double m_Ducats;
  bool m_DucatsIsSet;
  double m_Credits;
  bool m_CreditsIsSet;
};

} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_VoidTrader_allOf_inventory_H_ */
