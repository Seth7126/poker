// ============================================================
// 函数名称: sub_425f68
// 虚拟地址: 0x425f68
// WARP GUID: 3578a6b5-5534-5d4d-b472-6a0684a3e3e1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42f268, sub_42bebc, sub_42f1d4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_425f68(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if ((arg1[8].b & 0x10) == 0)
    if ((arg1[8].b & 0x10) == 0)
        int32_t edi_1 = *arg2
        
        if ((edi_1 == 0x201 || edi_1 == 0x203) && sub_42bebc(arg1) == 0 && *(arg1 + 0x4d) == 1)
            int16_t result = sub_42f1d4(arg1, arg2)
            
            if (result.b != 0)
                return result
            
            arg1[0x11].w |= 1
            return (*(*arg1 - 0x14))()
    
    return sub_42f268(arg1, arg2)
}
