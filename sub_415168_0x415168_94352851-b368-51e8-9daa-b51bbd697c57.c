// ============================================================
// 函数名称: sub_415168
// 虚拟地址: 0x415168
// WARP GUID: 94352851-b368-51e8-9daa-b51bbd697c57
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_413600, sub_413a6c, sub_415210, sub_403ee0
// [被调用的父级函数]: sub_4148a8, sub_411e98, sub_439e78, sub_414aa0
// ============================================================

int32_t __convention("regparm")sub_415168(void* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_c = arg3
    int32_t var_c = arg3
    var_c = 0
    char eax_1 = sub_415210(arg3)
    
    if (eax_1 == 6)
        sub_413a6c(arg1, &var_c, 1)
    else
        if (eax_1 != 0xc)
            sub_413600()
            noreturn
        
        sub_413a6c(arg1, &var_c, 4)
    
    sub_403ee0(arg2, 0, var_c)
    return sub_413a6c(arg1, *arg2, var_c)
}
