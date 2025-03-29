import 'package:flutter/material.dart';

class DefaultValues {
  static const int defaultColor = 0xFF2196F3;
  static const double iconSize = 26.0;
  static const double textSize = 16.0;
  static const double textHeight = 1.4;
}

class ActionBarWidget extends StatelessWidget {
  const ActionBarWidget({super.key});

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.only(top: 8.0, bottom: 2.0),
      child: Row(
        mainAxisAlignment: MainAxisAlignment.spaceEvenly,
        children: [
          Column(
            children: [
              Icon(
                Icons.place_outlined,
                color: Color(DefaultValues.defaultColor),
                size: DefaultValues.iconSize,
              ),
              Text(
                "Quero ir",
                style: TextStyle(
                  color: Color(DefaultValues.defaultColor),
                  fontSize: DefaultValues.textSize,
                  fontWeight: FontWeight.w600,
                  height: DefaultValues.textHeight,
                ),
              ),
            ],
          ),
          Column(
            children: [
              Icon(
                Icons.verified_outlined,
                color: Color(DefaultValues.defaultColor),
                size: DefaultValues.iconSize,
              ),
              Text(
                "Já fui",
                style: TextStyle(
                  color: Color(DefaultValues.defaultColor),
                  fontSize: DefaultValues.textSize,
                  fontWeight: FontWeight.w600,
                  height: DefaultValues.textHeight,
                ),
              ),
            ],
          ),
          Column(
            children: [
              Icon(
                Icons.share,
                color: Color(DefaultValues.defaultColor),
                size: DefaultValues.iconSize,
              ),
              Text(
                "Compartilhar",
                style: TextStyle(
                  color: Color(DefaultValues.defaultColor),
                  fontSize: DefaultValues.textSize,
                  fontWeight: FontWeight.w600,
                  height: DefaultValues.textHeight,
                ),
              ),
            ],
          ),
          Column(
            children: [
              Row(
                children: [
                  Icon(
                    Icons.star,
                    color: Color(DefaultValues.defaultColor),
                    size: DefaultValues.iconSize,
                  ),
                  Icon(
                    Icons.star,
                    color: Color(DefaultValues.defaultColor),
                    size: DefaultValues.iconSize,
                  ),
                  Icon(
                    Icons.star,
                    color: Color(DefaultValues.defaultColor),
                    size: DefaultValues.iconSize,
                  ),
                ],
              ),
              Text(
                "Avaliações",
                style: TextStyle(
                  color: Color(DefaultValues.defaultColor),
                  fontSize: DefaultValues.textSize,
                  fontWeight: FontWeight.w600,
                  height: DefaultValues.textHeight,
                ),
              ),
            ],
          ),
        ],
      ),
    );
  }
}
