// ============================================================
// 函数名称: sub_42c820
// 虚拟地址: 0x42c820
// WARP GUID: 1810ad73-d7f8-53ae-a1bb-7ed4887b64b9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_449d44, sub_440ee0, sub_42b378
// [被调用的父级函数]: sub_42f268
// ============================================================

int32_t __convention("regparm")sub_42c820(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: char result
    char result
    
    if ((arg1[8].b & 0x10) == 0)
        int32_t eax_3 = *arg2
        
        if (eax_3 u< 0x100 || eax_3 u> 0x108)
            int32_t eax_7 = *arg2
            
            if (eax_7 u>= 0x200 && eax_7 u<= 0x20a)
                if ((arg1[0x10].b & 0x80) == 0 && (eax_7 == 0x203 || eax_7 == 0x206 || eax_7 == 0x209))
                    *arg2 -= 2
                
                int32_t eax_11 = *arg2
                
                if (eax_11 == 0x200)
                    sub_449d44(*data_530660, arg1, arg2)
                else if (eax_11 == 0x201)
                label_42c8f3:
                    
                    if (*(arg1 + 0x4d) == 1)
                        int32_t* ebx
                        ebx.w = 0xffee
                        return sub_4032ac(arg1)
                    
                    arg1[0x11].w |= 1
                else if (eax_11 == 0x202)
                    arg1[0x11].w &= 0xfffe
                else if (eax_11 == 0x203)
                    goto label_42c8f3
            else if (eax_7 == 0xb00b)
                sub_42b378(arg2[1], eax_7, arg1, arg2[2])
        else
            int32_t* eax_5 = sub_440ee0(arg1)
            
            if (eax_5 != 0)
                result = (*(*eax_5 + 0xdc))()
                
                if (result != 0)
                    return result
    else
        int32_t* eax_1 = sub_440ee0(arg1)
        
        if (eax_1 != 0 && eax_1[0x8e] != 0)
            result = (*(*eax_1[0x8e] + 0x24))()
            
            if (result != 0)
                return result
    return (*(*arg1 - 0x14))()
}
