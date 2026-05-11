// ============================================================
// 函数名称: sub_43101c
// 虚拟地址: 0x43101c
// WARP GUID: c9ada316-bc77-5f41-9ba4-5ecf018c79f2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b31c, sub_42c1fc, sub_42f140
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_43101c(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    int32_t* edi = *(arg2 + 8)
    arg1.b = *(arg2 + 4)
    char temp0 = arg1.b
    arg1.b -= 4
    
    if (temp0 u>= 4)
        char temp1_1 = arg1.b
        arg1.b -= 1
        
        if (temp1_1 == 1)
            int32_t var_18
            sub_42b31c(esi, edi, &var_18)
            arg1 = sub_42f140(esi, 0)
            *(arg2 + 0xc) = 0
            *(arg2 + 0xc) = esi
    else if (edi[3] != 0)
        return sub_42c1fc(edi[3], arg2)
    
    return arg1
}
