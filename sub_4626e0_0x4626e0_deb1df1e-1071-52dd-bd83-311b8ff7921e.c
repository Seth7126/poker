// ============================================================
// 函数名称: sub_4626e0
// 虚拟地址: 0x4626e0
// WARP GUID: deb1df1e-1071-52dd-bd83-311b8ff7921e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_461234
// ============================================================

void (__convention("regparm")** __convention("regparm")sub_4626e0(int32_t* arg1, int32_t arg2, void (__convention("regparm")** arg3)(int32_t* arg1, int32_t arg2)))(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: void (__convention("regparm")** result)(int32_t* arg1, int32_t arg2) = (*arg1[1])(arg3)
    void (__convention("regparm")** result)(int32_t* arg1, int32_t arg2) = (*arg1[1])(arg3)
    *(arg1 + 0x145) = result
    *result = sub_462608
    
    if (arg1[0x2a] == 0)
        if (arg2 != 0)
            *(*arg1 + 0x14) = 4
            return (**arg1)()
        
        void* edi_1 = &result[6]
        void (__convention("regparm")** result_1)(int32_t* arg1, int32_t arg2) = nullptr
        void* esi_1 = arg1[0xf]
        
        while (true)
            result = result_1
            
            if (result s>= arg1[0xd])
                break
            
            *(esi_1 + 0x1c)
            *edi_1 = (*(arg1[1] + 8))(*(esi_1 + 0xc) << 3)
            edi_1 += 4
            result_1 += 1
            esi_1 += 0x54
    
    return result
}
