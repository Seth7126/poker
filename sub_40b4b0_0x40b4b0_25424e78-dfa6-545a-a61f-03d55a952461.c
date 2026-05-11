// ============================================================
// 函数名称: sub_40b4b0
// 虚拟地址: 0x40b4b0
// WARP GUID: 25424e78-dfa6-545a-a61f-03d55a952461
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_4033d0, sub_403e4c
// [被调用的父级函数]: sub_4a9330, sub_4a84a7, sub_4534cc, sub_4af7a3, sub_4374b4, sub_4a6afb, sub_48fca4, sub_4afc93, sub_490f66, sub_4b0427, sub_40bbb4, sub_49be64, sub_444722, sub_445ad4, sub_4087f4, sub_4afc9c, sub_4a80d4, sub_498fba, sub_4a8f18, sub_499960, sub_4998ec, sub_4ab7f4, sub_4a8b38, sub_419e90, sub_4a0968, sub_43709c, sub_49adfc, sub_4abbb0, sub_4a689d, sub_4a597c, sub_434a1c, sub_437af8, sub_4a79a0, sub_433384, sub_49cfe0, sub_47326c, sub_4a654c, sub_4ab120, sub_4a76d4, sub_419e3c, sub_40b454, sub_49292c, sub_4a87f8, sub_40b714, sub_4ab3e8, sub_42551c, sub_4a8c14, sub_4a8878, sub_4994c8, sub_499480, sub_47bd9b, sub_49c724, sub_49fdd0, sub_4448d8, sub_490a14, sub_4ab4f8, sub_437328, sub_44630c, sub_4a75b4, sub_49dd18, sub_4b6a84, sub_443220, sub_4a6308, sub_49c794, sub_424ac0, sub_472ccc, sub_4a72e4, sub_4a93b0, sub_4a3b70, sub_408781, sub_4ada94, sub_4a82e4, sub_4481cc, sub_4333cc, sub_4463a4, sub_4abda8, sub_40b6b0, sub_4af7b0, sub_49b963, sub_49ffc4, sub_4a2e48, sub_4255a0, sub_474260, sub_40bad8, sub_4a3d84, sub_4a8ea2, sub_44bb04
// ============================================================

int32_t* __convention("regparm")sub_40b4b0(int32_t* arg1, int32_t arg2, char* arg3)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    int32_t edi
    int32_t var_c = edi
    int32_t* esp = &var_c
    
    if (arg2.b != 0)
        void var_1c
        esp = &var_1c
        arg1 = sub_4033d0(arg3, arg2)
    
    sub_403e4c(&arg1[1], arg3)
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    esp[2]
    return arg1
}
