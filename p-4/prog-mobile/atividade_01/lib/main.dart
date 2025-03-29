import 'package:atividade_01/widgets/actionBar.dart';
import 'package:atividade_01/widgets/footer.dart';
import 'package:atividade_01/widgets/images.dart';
import 'package:flutter/material.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Flutter Demo',
      theme: ThemeData(
        // This is the theme of your application.
        //
        // TRY THIS: Try running your application with "flutter run". You'll see
        // the application has a purple toolbar. Then, without quitting the app,
        // try changing the seedColor in the colorScheme below to Colors.green
        // and then invoke "hot reload" (save your changes or press the "hot
        // reload" button in a Flutter-supported IDE, or press "r" if you used
        // the command line to start the app).
        //
        // Notice that the counter didn't reset back to zero; the application
        // state is not lost during the reload. To reset the state, use hot
        // restart instead.
        //
        // This works for code too, not just values: Most code changes can be
        // tested with just a hot reload.
        colorScheme: ColorScheme.fromSeed(seedColor: Colors.blue),
      ),
      home: const MyHomePage(title: 'Viagens'),
    );
  }
}

class MyHomePage extends StatelessWidget {
  const MyHomePage({super.key, required this.title});
  final String title;

  @override
  Widget build(BuildContext context) {
    // This method is rerun every time setState is called, for instance as done
    // by the _incrementCounter method above.
    //
    // The Flutter framework has been optimized to make rerunning build methods
    // fast, so that you can just rebuild anything that needs updating rather
    // than having to individually change instances of widgets.
    return Scaffold(
      backgroundColor: Colors.white,
      appBar: AppBar(
        backgroundColor: Colors.blue[500],
        title: Text(
          title,
          style: TextStyle(
            color: Colors.white,
            fontSize: 30,
            fontWeight: FontWeight.w600,
          ),
        ),
        shadowColor: Colors.black,
        elevation: 6,
      ),
      body: Center(
        child: Column(
          children: [
            ImageWidget(),
            ActionBarWidget(),
            Container(
              padding: EdgeInsets.only(left: 16, right: 16, top: 8, bottom: 8),
              child: Text(
                "A Torre de Pisa é um dos monumentos mais famosos do mundo, conhecida por sua inclinação. Localizada na cidade de Pisa, na Itália, a torre foi construída entre os séculos 12 e 14 como parte de um complexo arquitetônico que inclui a catedral e o batistério. A torre começou a inclinar-se durante sua construção devido ao solo instável. Apesar disso, a torre foi concluída e se tornou um ícone da arquitetura medieval. Hoje, é um Patrimônio Mundial da UNESCO e atrai milhões de turistas todos os anos.",
                textAlign: TextAlign.justify,
                style: TextStyle(
                  fontSize: 16,
                  fontWeight: FontWeight.w400,
                  height: 1.2,
                ),
              ),
            ),
            FooterWidget(),
          ],
        ),
      ),
    );
  }
}
