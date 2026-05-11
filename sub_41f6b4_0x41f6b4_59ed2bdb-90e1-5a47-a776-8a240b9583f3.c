// ============================================================
// 函数名称: sub_41f6b4
// 虚拟地址: 0x41f6b4
// WARP GUID: 59ed2bdb-90e1-5a47-a776-8a240b9583f3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41a978, sub_4128f8, sub_4128b4, sub_419e24
// [被调用的父级函数]: sub_41f678
// ============================================================

void __convention("regparm")sub_41f6b4(int32_t* arg1)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    void* ebx = esi[8]
    
    if (*(ebx + 8) != 0)
        return 
    
    arg1 = *(ebx + 0xc)
    
    if (arg1 == 0)
        return 
    
    sub_4128b4(arg1)
    void var_14
    sub_4128f8(*(ebx + 0xc), &var_14, 6)
    int16_t var_12
    int32_t* var_c
    
    if (var_12 u< 1)
        var_c = data_53166c
    else
        if (var_12 != 1)
            sub_419e24()
            noreturn
        
        int32_t var_18_1 = 6
        int16_t var_10
        sub_41a978(*(ebx + 0xc), &var_c, zx.d(var_10), ebx + 0x10, &esi[9])
    
    *(ebx + 8) = var_c
}
