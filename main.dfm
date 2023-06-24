object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 648
  ClientWidth = 1035
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Slika: TImage
    Left = 8
    Top = 8
    Width = 1019
    Height = 593
    OnMouseDown = SlikaMouseDown
  end
  object algoritamDugme: TButton
    Left = 104
    Top = 607
    Width = 145
    Height = 33
    Caption = 'Algoritam'
    TabOrder = 0
    OnClick = algoritamDugmeClick
  end
  object generisiDuzi: TButton
    Left = 312
    Top = 607
    Width = 137
    Height = 33
    Caption = 'Generisi duzi'
    TabOrder = 1
    OnClick = generisiDuziClick
  end
  object duzicr: TRadioButton
    Left = 520
    Top = 607
    Width = 129
    Height = 33
    Caption = 'Crtanje duzi'
    TabOrder = 2
  end
end
