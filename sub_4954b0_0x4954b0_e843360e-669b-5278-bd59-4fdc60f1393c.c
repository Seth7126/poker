// ============================================================
// 函数名称: sub_4954b0
// 虚拟地址: 0x4954b0
// WARP GUID: e843360e-669b-5278-bd59-4fdc60f1393c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4953f4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4954b0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    char result = sub_4953f4(&__saved_ebp)
    
    if (result != 0)
        uint32_t eax_1 = zx.d(*(arg2 + 8))
        
        if (eax_1 s> 8)
            if (eax_1 == 0x10)
                *(arg2 + 4)
                return (*(*arg1 + 4))(arg1, arg2)
            
            result = (eax_1 - 0x10).b - 0x10
            
            if (eax_1 == 0x20)
                *(arg2 + 4)
                return (*(*arg1 + 8))(arg1, arg2)
        else
            if (eax_1 == 8)
                *(arg2 + 4)
                return (**arg1)(arg1, arg2)
            
            if (eax_1 == 1)
                *(arg2 + 4)
                return (*(*arg1 + 0xc))(arg1, arg2)
            
            result = (eax_1 - 1).b - 1
            
            if (eax_1 == 2)
                *(arg2 + 4)
                return (*(*arg1 + 0x10))(arg1, arg2)
    
    return result
}
