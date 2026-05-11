// ============================================================
// 函数名称: sub_454c28
// 虚拟地址: 0x454c28
// WARP GUID: b091e67c-3cbe-5509-b525-b41d65537454
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4549d4
// [被调用的父级函数]: sub_453ff8, sub_454bbc
// ============================================================

int32_t __convention("regparm")sub_454c28(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax_1 = arg1[4] - 0xc8
    int32_t eax_1 = arg1[4] - 0xc8
    
    if (eax_1 u> 0xa)
    label_454cb7:
        void* eax_9 = *arg1
        *(eax_9 + 0x14) = 0x12
        *(eax_9 + 0x18) = arg1[4]
        (**arg1)()
        return 0
    
    eax_1.b = lookup_table_454c48[eax_1]
    
    switch (eax_1)
        case 0
            goto label_454cb7
        case 1
            return (**(arg1 + 0x1a6))()
        case 2
            return 1
        case 3
            goto label_454c8b
        case 4
            (*(*(arg1 + 0x1a6) + 4))()
            (*(arg1[5] + 8))()
            arg1[4] = 0xc9
        label_454c8b:
            int32_t result = (**(arg1 + 0x1a6))()
            
            if (result == 1)
                sub_4549d4(arg1)
                arg1[4] = 0xca
            
            return result
}
