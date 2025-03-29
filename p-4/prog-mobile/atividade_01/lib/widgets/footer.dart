import 'package:flutter/material.dart';

class FooterWidget extends StatelessWidget {
  const FooterWidget({super.key});

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.only(left: 6.0, right: 6.0),
      child: Column(
        children: [
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceBetween,
            children: [
              Text(
                "Pessoas encontradas",
                style: TextStyle(
                  color: Colors.blue[500],
                  fontSize: 20,
                  fontWeight: FontWeight.bold,
                ),
              ),
              Column(
                children: [
                  Icon(Icons.filter_alt, color: Colors.blue[500], size: 22.0),
                  Text(
                    "Filtrar",
                    style: TextStyle(
                      color: Colors.blue[500],
                      fontSize: 14.0,
                      fontWeight: FontWeight.w600,
                      height: 1.2,
                    ),
                  ),
                ],
              ),
            ],
          ),
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceEvenly,
            children: [
              ...[
                Icons.person_pin,
                Icons.person_pin,
                Icons.person_pin,
                Icons.person_pin,
              ].map(
                (iconData) =>
                    Icon(iconData, color: Colors.grey[500], size: 70.0),
              ),
            ],
          ),
        ],
      ),
    );
  }
}
