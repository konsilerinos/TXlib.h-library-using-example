# Пример использования библиотеки TXlib.h

Демонстрация инструкций создания геометрических фигур.

Объекты:
- Мавзолей В. И. Ленина, башня;
- Грузовик ГАЗ-АА "Полуторка";
- Реактивная система залпового огня БМ-13 "Катюша";
- Средний танк Т-34;
- Средний бронеавтомобиль БА-3;
- Штурмовик ИЛ-2;
- Система ПВО (пушки и лучи света).

Направление координатных осей для вызова функций размещения объектов (особенность библиотеки TXlib.h):
![изображение](https://user-images.githubusercontent.com/78896451/111069780-b2f66e00-84df-11eb-9644-d0cf9f3a64f5.png)

Пространства имён для разделения функций и констант:
- parade - содержит вложенные пространства имён;
- aux_fun - вне зависимости от иерархии предназначен для сокрытия функций с промежуточным результатом;
- environment - содержит функции создания окружения (небо, стена, проезжая часть);
- buildings - содержит пространства имён и функции для создания недвижимости (башня и мавзолей);
- vehicles - содержит пространства имён и функции для создания техники (в т. ч. система ПВО);
- aircraft - содержит пространства имён и функции для создания воздушной техники (самолёт ИЛ-2).
 
 Композиция из объектов:
 
![изображение](https://user-images.githubusercontent.com/78896451/110846265-a6460000-82bc-11eb-9c02-2aa2f1147522.png)

Центры систем координат относительно объектов помечены красным кругом.

![изображение](https://user-images.githubusercontent.com/78896451/111069307-7b86c200-84dd-11eb-9a53-0b74afebfd79.png)
