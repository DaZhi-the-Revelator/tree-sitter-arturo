export interface BindingExports {
  name: string;
  language: unknown;
  nodeTypeInfo?: unknown;
}

declare const binding: BindingExports;
export = binding;
