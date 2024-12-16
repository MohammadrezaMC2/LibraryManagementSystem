#ifndef DISCOUNTCOUPON_H
#define DISCOUNTCOUPON_H

#include <string>
#include "User.h"

// Class representing a discount coupon
class DiscountCoupon {
public:
    // Code of the discount coupon
    std::string couponCode;
    // Discount percentage offered by the coupon
    float discountPercentage;

    // Constructor to initialize the coupon with a code and discount percentage
    DiscountCoupon(const std::string& code, float discount);

    // Applies the discount coupon to a user
    void applyCoupon(User* user);
};

#endif // DISCOUNTCOUPON_H
