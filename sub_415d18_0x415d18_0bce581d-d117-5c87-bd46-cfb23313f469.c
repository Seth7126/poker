// ============================================================
// 函数名称: sub_415d18
// 虚拟地址: 0x415d18
// WARP GUID: 0bce581d-d117-5c87-bd46-cfb23313f469
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_415ee0, sub_403428, sub_4033d0
// [被调用的父级函数]: sub_439a38, sub_447f54, sub_4165dc, sub_4974fc, sub_446fc8, sub_42a97c, sub_436fe4, sub_4a58dc, sub_4365f4, sub_4a05ff, sub_4adf9c, sub_4a3350, sub_4ae0d4, sub_497894, sub_4a2e48, sub_43caf4, sub_4ae06f
// ============================================================

int32_t* __convention("regparm")sub_415d18(int32_t* arg1, int32_t arg2, int32_t* arg3)
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
    
    *(arg1 + 0x22) = 1
    
    if (arg3 != 0)
        sub_415ee0(arg3, arg1)
    
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
