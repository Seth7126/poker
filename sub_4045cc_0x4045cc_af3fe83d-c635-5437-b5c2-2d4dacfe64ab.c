// ============================================================
// 函数名称: sub_4045cc
// 虚拟地址: 0x4045cc
// WARP GUID: af3fe83d-c635-5437-b5c2-2d4dacfe64ab
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SysFreeString, SysAllocStringLen
// [内部子函数调用]: sub_4044e8, sub_4027e0
// [被调用的父级函数]: sub_404548
// ============================================================

int32_t __convention("regparm")sub_4045cc(OLECHAR** arg1, wchar16* arg2, uint32_t arg3)
{
    // 第一条实际指令: if (arg3 == 0)
    if (arg3 == 0)
        return sub_4044e8(arg1) __tailcall
    
    BSTR eax = SysAllocStringLen(arg2, arg3)
    
    if (eax == 0)
        eax.b = 1
        noreturn sub_4027e0(eax) __tailcall
    
    OLECHAR* bstrString = *arg1
    *arg1 = eax
    return SysFreeString(bstrString)
}
