// ============================================================
// 函数名称: sub_403030
// 虚拟地址: 0x403030
// WARP GUID: 335e9092-81c6-5e85-9e24-e8770e0b1f62
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40fb5c
// ============================================================

char* __convention("regparm")sub_403030(char* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebx = 0
    int32_t ebx = 0
    
    if (arg2 != 0)
        arg1 = *(arg1 - 0x2c)
        int32_t ecx_1
        ecx_1.b = *arg1
        
        if (ecx_1 == *(arg2 - 4))
            while (true)
                ebx:1.b = arg1[ecx_1]
                ebx:1.b ^= *(arg2 - 1 + ecx_1)
                ebx:1.b &= 0xdf
                
                if (ebx:1.b != 0)
                    break
                
                int32_t temp0_1 = ecx_1
                ecx_1 -= 1
                
                if (temp0_1 == 1)
                    ebx += 1
                    break
    
    arg1.b = ebx.b
    return arg1
}
