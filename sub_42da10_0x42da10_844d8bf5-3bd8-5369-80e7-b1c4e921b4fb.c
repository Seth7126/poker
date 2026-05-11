// ============================================================
// 函数名称: sub_42da10
// 虚拟地址: 0x42da10
// WARP GUID: 844d8bf5-3bd8-5369-80e7-b1c4e921b4fb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_4033d0
// [被调用的父级函数]: sub_51a68f, sub_4d954c, sub_4d9378, sub_51b5c0
// ============================================================

int32_t* __convention("regparm")sub_42da10(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = arg3
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* esp_1 = &var_10
    
    if (arg2.b != 0)
        void var_20
        esp_1 = &var_20
        arg1 = sub_4033d0(arg3, arg2)
    
    var_8:3.b = arg2.b
    arg1[0x59] = arg3
    (*(*arg1 + 0x2c))()
    
    if (var_8:3.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_1
        esp_1 = &esp_1[4]
    
    *esp_1
    esp_1[1]
    esp_1[2]
    esp_1[3]
    return arg1
}
