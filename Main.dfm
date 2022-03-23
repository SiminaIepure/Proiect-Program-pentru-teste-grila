object fMain: TfMain
  Left = 842
  Top = 105
  Width = 562
  Height = 431
  Caption = 'Test'
  Color = clCream
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object lIntrebare: TLabel
    Left = 11
    Top = 256
    Width = 6
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object lRasp: TLabel
    Left = 8
    Top = 360
    Width = 4
    Height = 16
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object lCorect: TLabel
    Left = 11
    Top = 384
    Width = 4
    Height = 16
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object afisImg: TImage
    Left = 56
    Top = 8
    Width = 313
    Height = 241
  end
  object cbRasp1: TCheckBox
    Left = 8
    Top = 288
    Width = 97
    Height = 25
    Caption = 'Raspuns1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = cbRasp1Click
  end
  object cbRasp2: TCheckBox
    Left = 112
    Top = 288
    Width = 97
    Height = 25
    Caption = 'Raspuns2'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = cbRasp2Click
  end
  object cbRasp3: TCheckBox
    Left = 216
    Top = 288
    Width = 97
    Height = 25
    Caption = 'Raspuns3'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = cbRasp3Click
  end
  object btnStart: TButton
    Left = 8
    Top = 320
    Width = 113
    Height = 25
    Caption = 'Incepe Test'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = btnStartClick
  end
  object btnUrm: TButton
    Left = 136
    Top = 320
    Width = 145
    Height = 25
    Caption = 'Urmatoarea Intrebare'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    OnClick = btnUrmClick
  end
  object cbRasp4: TCheckBox
    Left = 320
    Top = 288
    Width = 97
    Height = 25
    Caption = 'Raspuns4'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
    OnClick = cbRasp4Click
  end
end
