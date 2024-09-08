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
 * DailyDeals_inner.h
 *
 *
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_DailyDeals_inner_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_DailyDeals_inner_H_

#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
///
/// </summary>
class DailyDeals_inner : public ModelBase {
public:
  DailyDeals_inner();
  virtual ~DailyDeals_inner();

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
  /// DailyDeals_inner members

  /// <summary>
  ///
  /// </summary>
  double getSold() const;
  bool soldIsSet() const;
  void unsetSold();

  void setSold(double value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getItem() const;
  bool itemIsSet() const;
  void unsetItem();

  void setItem(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getUniqueName() const;
  bool uniqueNameIsSet() const;
  void unsetUniqueName();

  void setUniqueName(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  double getTotal() const;
  bool totalIsSet() const;
  void unsetTotal();

  void setTotal(double value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getEta() const;
  bool etaIsSet() const;
  void unsetEta();

  void setEta(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  double getOriginalPrice() const;
  bool originalPriceIsSet() const;
  void unsetOriginalPrice();

  void setOriginalPrice(double value);

  /// <summary>
  ///
  /// </summary>
  double getSalePrice() const;
  bool salePriceIsSet() const;
  void unsetSalePrice();

  void setSalePrice(double value);

  /// <summary>
  ///
  /// </summary>
  double getDiscount() const;
  bool discountIsSet() const;
  void unsetDiscount();

  void setDiscount(double value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getExpiry() const;
  bool expiryIsSet() const;
  void unsetExpiry();

  void setExpiry(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getId() const;
  bool idIsSet() const;
  void unsetId();

  void setId(const utility::string_t &value);

protected:
  double m_Sold;
  bool m_SoldIsSet;
  utility::string_t m_Item;
  bool m_ItemIsSet;
  utility::string_t m_UniqueName;
  bool m_UniqueNameIsSet;
  double m_Total;
  bool m_TotalIsSet;
  utility::string_t m_Eta;
  bool m_EtaIsSet;
  double m_OriginalPrice;
  bool m_OriginalPriceIsSet;
  double m_SalePrice;
  bool m_SalePriceIsSet;
  double m_Discount;
  bool m_DiscountIsSet;
  utility::string_t m_Expiry;
  bool m_ExpiryIsSet;
  utility::string_t m_Id;
  bool m_IdIsSet;
};

} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_DailyDeals_inner_H_ */
