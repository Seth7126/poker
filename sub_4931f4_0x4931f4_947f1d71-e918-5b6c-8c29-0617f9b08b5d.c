// ============================================================
// 函数名称: sub_4931f4
// 虚拟地址: 0x4931f4
// WARP GUID: 947f1d71-e918-5b6c-8c29-0617f9b08b5d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: mciSendCommandA
// [内部子函数调用]: sub_492c54, sub_493af4, sub_493628, sub_4318d0, sub_492820, sub_493a70, sub_48ed3c, sub_48ed34, sub_48ed30, sub_493678, sub_493ab4
// [被调用的父级函数]: sub_492528
// ============================================================

uint32_t __convention("regparm")sub_4931f4(int32_t* arg1)
{
    // 第一条实际指令: sub_492820(arg1)
    sub_492820(arg1)
    arg1[0xb4] = 0
    
    if (*(arg1 + 0x2d6) == 0)
        arg1[0xb4] = 2
    else
        if (arg1[0xb5].b != 0)
            arg1[0xb4] = 2
        
        *(arg1 + 0x2d6) = 0
    
    if (*(arg1 + 0x2d7) != 0)
        if (*(arg1 + 0x2d5) != 0)
            arg1[0xb4] |= 1
        
        *(arg1 + 0x2d7) = 0
    
    int32_t ebp = arg1[0xb4]
    uint32_t result
    
    if (sub_493af4(arg1) != 0xa)
        arg1[0xb4] = ebp | 0x100
    label_493382:
        int32_t dwParam2 = sub_4318d0(arg1)
        result = mciSendCommandA(zx.d(*(arg1 + 0x2da)), 0x807, arg1[0xb4], &dwParam2)
        arg1[0xbb] = result
    else
        int32_t eax_4 = sub_493ab4(arg1)
        int32_t edx_1
        edx_1.b = sub_493ab4(arg1)
        int32_t eax_8 = sub_493628(arg1)
        
        if (sub_493a70(arg1) != 2)
            if (eax_4.b == 1)
                int32_t var_14 = eax_8
            else if (sub_48ed34() != sub_48ed34())
                var_14 = eax_8
            else if (sub_48ed3c(eax_4) != sub_48ed3c(eax_8))
                var_14 = eax_8
            else
                int32_t edx_10
                edx_10.b = sub_493ab4(arg1)
                var_14 = sub_493628(arg1)
            
            arg1[0xb4] = ebp | 8
            goto label_493382
        
        if (eax_4.b == 1)
            sub_493678(arg1, eax_8)
        else if (sub_48ed34() != sub_48ed34())
            sub_493678(arg1, eax_8)
        else if (sub_48ed3c(eax_4) != sub_48ed3c(eax_8))
            sub_493678(arg1, eax_8)
        else
            int32_t edx_4
            edx_4.b = sub_493ab4(arg1)
            sub_493678(arg1, sub_493628(arg1))
        
        result = sub_492c54(arg1)
        *(arg1 + 0x292) = 0
    
    return result
}
