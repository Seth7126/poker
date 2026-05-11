// ============================================================
// 函数名称: sub_42f268
// 虚拟地址: 0x42f268
// WARP GUID: 54f49088-bebe-5293-84c5-ccd835809564
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetKeyboardState, GetCapture, DefWindowProcA
// [内部子函数调用]: sub_4032ac, sub_42b31c, sub_42f1d4, sub_42c754, sub_4318d0, sub_440ee0, sub_42bebc, sub_440e24, sub_42c820, sub_407800, sub_42f140
// [被调用的父级函数]: sub_425014, sub_443300, sub_425f68
// ============================================================

LRESULT __convention("regparm")sub_42f268(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t eax = *arg2
    int32_t eax = *arg2
    LRESULT result
    
    if (eax s<= 0x84)
        if (eax == 0x84)
            result = sub_42c820(arg1, arg2)
            
            if (arg2[3] != 0xffffffff)
                return result
            
            void var_124
            sub_407800(arg2[2], &var_124)
            void var_11c
            sub_42b31c(arg1, &var_124, &var_11c)
            return sub_42f140(arg1, 0)
        
        if (eax == 7)
            int32_t* eax_8 = sub_440ee0(arg1)
            
            if (eax_8 != 0)
                result = (*(*eax_8 + 0xd4))()
                
                if (result.b == 0)
                    return result
        else
            result = eax - 8
            
            if (eax != 8)
                if (result != 0x17)
                    goto label_42f3db
                
                if (sub_4318d0(arg1) == GetCapture() && data_52e800 != 0
                        && arg1 == *(data_52e800 + 0x24))
                    sub_42c754(data_52e800, 0)
            else if ((arg1[0x11].b & 0x20) != 0)
                return result
    else if (eax - 0x100 u< 9)
        result = sub_42bebc(arg1)
        
        if (result.b != 0)
            return result
    else if (eax - 0x200 u< 0xb)
        result = sub_42f1d4(arg1, arg2)
        
        if (result.b != 0)
            if (arg2[3] == 0)
                return DefWindowProcA(sub_4318d0(arg1), *arg2, arg2[1], arg2[2])
            
            return result
    else
    label_42f3db:
        
        if (*(data_531750 + 0x20) != 0 && *(data_531750 + 0x1c) != 0 && *arg2 == *(data_531750 + 0x1c))
            uint8_t keyState[0x100]
            GetKeyboardState(&keyState)
            int32_t var_14 = *arg2
            char var_10_1 = sub_440e24(&keyState).b
            int16_t var_e_1 = arg2[1].w
            int32_t var_c_1 = arg2[2]
            int32_t* ebx
            ebx.w = 0xffb7
            return sub_4032ac(arg1, &var_14)
    return sub_42c820(arg1, arg2)
}
