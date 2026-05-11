// ============================================================
// 函数名称: sub_445168
// 虚拟地址: 0x445168
// WARP GUID: 36467c99-a8e2-5932-b7bd-e77e96a810ec
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: IsIconic
// [内部子函数调用]: sub_42fbc4, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_445168(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (IsIconic(sub_4318d0(arg1)) == 0)
    if (IsIconic(sub_4318d0(arg1)) == 0)
        return sub_42fbc4(arg1, arg2)
    
    *arg2 = 0x27
    return (*(*arg1 - 0x10))()
}
