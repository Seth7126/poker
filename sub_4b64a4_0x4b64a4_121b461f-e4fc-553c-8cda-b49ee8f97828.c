// ============================================================
// 函数名称: sub_4b64a4
// 虚拟地址: 0x4b64a4
// WARP GUID: 121b461f-e4fc-553c-8cda-b49ee8f97828
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SysFreeString
// [内部子函数调用]: sub_4b63bc, sub_404cec
// [被调用的父级函数]: sub_4b6678
// ============================================================

uint32_tsub_4b64a4(uint32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: uint32_t var_c = 0
    uint32_t var_c = 0
    uint32_t var_10 = 0
    int32_t var_14 = 0
    uint32_t var_18 = 0
    void arg_10
    sub_4b63bc(arg2, arg3 + 5, *arg3, &arg_10, &arg_10, &var_18)
    uint32_t eax_1 = zx.d(arg3[1].b)
    
    switch (eax_1)
        case 2, 3, 0xb, 0x10
            return var_10
        case 6
            return eax_1
        case 8
            uint32_t bstrString = *arg1
            
            if (bstrString != 0)
                SysFreeString(bstrString)
            
            *arg1 = var_10
            return var_10
        case 9, 0xd
            uint32_t eax_2 = *arg1
            
            if (eax_2 != 0)
                (*(*eax_2 + 8))(eax_2)
            
            *arg1 = var_10
            return var_10
        case 0xc
            sub_404cec(arg1)
            *arg1 = var_18
            arg1[1] = var_14
            arg1[2] = var_10
            arg1[3] = var_c
            return var_c
}
