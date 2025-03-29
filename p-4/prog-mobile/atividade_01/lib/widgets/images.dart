import 'package:flutter/material.dart';

class ImageWidget extends StatelessWidget {
  const ImageWidget({super.key});
  final String imagePath = 'img/torre-de-pisa.jpg';

  @override
  Widget build(BuildContext context) {
    return Stack(
      alignment: Alignment.topLeft,
      children: [
        Container(
          color: Colors.white,
          child: Center(
            child: Transform.scale(
              scaleX: -1,
              child: Image.asset(imagePath, fit: BoxFit.cover),
            ),
          ),
        ),
        Padding(
          padding: const EdgeInsets.all(8.0),
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.start,
            children: [
              Text(
                "Pisa",
                style: TextStyle(
                  color: Colors.white,
                  fontSize: 16,
                  fontWeight: FontWeight.bold,
                  height: 1.2
                ),
              ),
              Text(
                "Torre de Pisa",
                style: TextStyle(
                  color: Colors.white,
                  fontSize: 20,
                  fontWeight: FontWeight.bold,
                  height: 1.2
                ),
              ),
            ],
          ),
        ),
      ],
    );
  }
}
