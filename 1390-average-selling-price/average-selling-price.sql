# Write your MySQL query statement below
SELECT
    p.product_id AS product_id,

    ROUND(
        COALESCE(
            SUM(
                CASE
                    WHEN s.purchase_date BETWEEN p.start_date AND p.end_date
                    THEN s.units * p.price
                    ELSE 0
                END
            )
            /
            SUM(
                CASE
                    WHEN s.purchase_date BETWEEN p.start_date AND p.end_date
                    THEN s.units
                    ELSE 0
                END
            ),
            0
        ),
        2
    ) AS average_price

FROM Prices AS p

LEFT JOIN UnitsSold AS s
    ON p.product_id = s.product_id

GROUP BY p.product_id;