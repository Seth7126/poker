// ============================================================
// 函数名称: sub_43df80
// 虚拟地址: 0x43df80
// WARP GUID: 780cd719-5d41-5d48-813e-cd36fe8ec4ac
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43d744, sub_439178
// [被调用的父级函数]: sub_43e014
// ============================================================

void* __convention("regparm")sub_43df80(int32_t* arg1)
{
    // 第一条实际指令: void* result = data_530a80
    void* result = data_530a80
    
    if (*(result + 9) != 0 && *(arg1 + 0x35) != 0)
        HANDLE eax_1 = sub_439178(&arg1[0x12])
        
        if (eax_1 == 0)
            result = sub_43d744(arg1, *(*data_530660 + 0x28))
            *(arg1 + 0x35) = 1
        else
            result = sub_43d744(arg1, *(eax_1 + 0x4f))
            *(arg1 + 0x35) = 1
    
    return result
}
