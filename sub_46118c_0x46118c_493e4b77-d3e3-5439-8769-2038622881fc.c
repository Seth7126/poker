// ============================================================
// 函数名称: sub_46118c
// 虚拟地址: 0x46118c
// WARP GUID: 493e4b77-d3e3-5439-8769-2038622881fc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __stdcallsub_46118c(int32_t* arg1 @ eax, int32_t arg2)
{
    // 第一条实际指令: if (*(arg1 + 0xd5) != 0)
    if (*(arg1 + 0xd5) != 0)
    label_4611b3:
        void* eax_1 = *arg1
        *(eax_1 + 0x14) = 0x12
        *(eax_1 + 0x18) = arg1[4]
        (**arg1)()
    else
        int32_t eax = arg1[4]
        
        if (eax != 0x65 && eax != 0x66 && eax != 0x67)
            goto label_4611b3
    
    return (**(arg1 + 0x151))(arg2)
}
