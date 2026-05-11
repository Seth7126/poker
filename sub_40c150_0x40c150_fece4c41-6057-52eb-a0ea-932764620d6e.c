// ============================================================
// 函数名称: sub_40c150
// 虚拟地址: 0x40c150
// WARP GUID: fece4c41-6057-52eb-a0ea-932764620d6e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CompareStringA
// [内部子函数调用]: sub_40bde8, sub_409544, sub_4093b0
// [被调用的父级函数]: sub_40c024
// ============================================================

void* __convention("regparm")sub_40c150(char* arg1, char* arg2)
{
    // 第一条实际指令: void* lpString1 = nullptr
    void* lpString1 = nullptr
    
    if (arg1 != 0 && *arg1 != 0 && arg2 != 0 && *arg2 != 0)
        int32_t var_18 = sub_4093b0(arg1)
        int32_t eax_3 = sub_4093b0(arg2)
        lpString1 = sub_409544(arg1, arg2)
        
        while (true)
            if (lpString1 == 0 || eax_3 u> var_18 - (lpString1 - arg1))
                return nullptr
            
            int32_t var_14
            var_14.b = sub_40bde8()
            
            if (var_14.b != 2 && CompareStringA(0x400, 0, lpString1, eax_3, arg2, eax_3) == CSTR_EQUAL)
                break
            
            if (var_14.b == 1)
                lpString1 += 1
            
            lpString1 = sub_409544(lpString1 + 1, arg2)
            continue
    
    return lpString1
}
