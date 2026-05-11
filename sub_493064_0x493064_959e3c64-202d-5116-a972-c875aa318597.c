// ============================================================
// 函数名称: sub_493064
// 虚拟地址: 0x493064
// WARP GUID: 959e3c64-202d-5116-a972-c875aa318597
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: mciSendCommandA
// [内部子函数调用]: sub_492c54, sub_493af4, sub_493628, sub_4318d0, sub_493a70, sub_492820, sub_493a28, sub_48ed30, sub_493678, sub_493ab4
// [被调用的父级函数]: sub_492528
// ============================================================

uint32_t __convention("regparm")sub_493064(int32_t* arg1)
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
    
    int32_t esi = arg1[0xb4]
    uint32_t result
    
    if (sub_493af4(arg1) != 0xa)
        arg1[0xb4] = esi | 0x200
    label_4931c7:
        int32_t dwParam2 = sub_4318d0(arg1)
        result = mciSendCommandA(zx.d(*(arg1 + 0x2da)), 0x807, arg1[0xb4], &dwParam2)
        arg1[0xbb] = result
    else
        if (sub_493a70(arg1) != 2)
            int32_t var_10
            
            if (zx.d(sub_493ab4(arg1)) != sub_493a28(arg1))
                int32_t edx_7
                edx_7.b = sub_493ab4(arg1)
                var_10 = sub_493628(arg1)
            else
                sub_493a28(arg1)
                var_10 = sub_493628(arg1)
            arg1[0xb4] = esi | 8
            goto label_4931c7
        
        if (zx.d(sub_493ab4(arg1)) != sub_493a28(arg1))
            int32_t edx_3
            edx_3.b = sub_493ab4(arg1)
            sub_493678(arg1, sub_493628(arg1))
        else
            sub_493a28(arg1)
            sub_493678(arg1, sub_493628(arg1))
        
        result = sub_492c54(arg1)
        *(arg1 + 0x292) = 0
    
    return result
}
